#define LGFX_USE_V1
#include <LovyanGFX.hpp>
#include <driver/i2c.h>
#include <lvgl.h>
#include "ui.h"
//#include "lv_conf.h"

static const uint32_t screenWidth  = 320;
static const uint32_t screenHeight = 480;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[2][screenWidth * 70]; 

class LGFX : public lgfx::LGFX_Device {
  lgfx::Panel_ST7796 _panel_instance;
  lgfx::Bus_SPI _bus_instance;
  lgfx::Light_PWM _light_instance;
  lgfx::Touch_GT911 _touch_instance;
public:
  LGFX(void) {
    {
      auto cfg = _bus_instance.config();

      // SPIバスの設定
      cfg.spi_host = HSPI_HOST;
      cfg.spi_mode = 0;
      cfg.freq_write = 80000000;
      cfg.freq_read = 40000000;
      cfg.spi_3wire = true;
      cfg.use_lock = true;
      cfg.dma_channel = SPI_DMA_CH_AUTO;
      cfg.pin_sclk = 14;  // 変更
      cfg.pin_mosi = 13;  // 変更
      cfg.pin_miso = 12;  // 変更
      cfg.pin_dc = 2;     // 変更

      _bus_instance.config(cfg);
      _panel_instance.setBus(&_bus_instance);
    }

    {
      auto cfg = _panel_instance.config();

      cfg.pin_cs = 15;    // 変更
      cfg.pin_rst = -1;   // 変更
      cfg.pin_busy = -1;  // 変更

      cfg.panel_width = 320;
      cfg.panel_height = 480;
      cfg.offset_x = 0;
      cfg.offset_y = 0;
      cfg.offset_rotation = 0;
      cfg.dummy_read_pixel = 8;
      cfg.dummy_read_bits = 1;
      cfg.readable = true;
      cfg.invert = false;
      cfg.rgb_order = false;
      cfg.dlen_16bit = false;
      cfg.bus_shared = true;

      _panel_instance.config(cfg);
    }

    {
      auto cfg = _light_instance.config();

      cfg.pin_bl = 27;  // 変更
      cfg.invert = false;
      cfg.freq = 1200;
      cfg.pwm_channel = 7;

      _light_instance.config(cfg);
      _panel_instance.setLight(&_light_instance);
    }

    {
      auto cfg = _touch_instance.config();

      cfg.pin_int = GPIO_NUM_36;  // INT pin number
      cfg.pin_sda = GPIO_NUM_33;  // I2C SDA pin number
      cfg.pin_scl = GPIO_NUM_32;  // I2C SCL pin number
      cfg.i2c_addr = 0x5D;        // I2C device addr
      cfg.i2c_port = I2C_NUM_0;   // I2C port number
      cfg.freq = 800000;          // I2C freq
      cfg.x_min = 14;
      cfg.x_max = 310;
      cfg.y_min = 5;
      cfg.y_max = 448;
      cfg.offset_rotation = 0;
      cfg.bus_shared = false;

      _touch_instance.config(cfg);
      _panel_instance.setTouch(&_touch_instance);
    }

    setPanel(&_panel_instance);
  }
};

LGFX tft; // 準備したクラスのインスタンスを作成します。

//=====================================================================
// Display flushing
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, 
                    lv_color_t *color_p) {
  if (tft.getStartCount()==0){  // Run if not already started
    tft.startWrite();
  } 
  tft.pushImageDMA( area->x1
                  , area->y1
                  , area->x2 - area->x1 + 1
                  , area->y2 - area->y1 + 1
                  , ( lgfx::swap565_t* )&color_p->full);
  lv_disp_flush_ready(disp);
}

void init_display() {
  static lv_disp_drv_t disp_drv;     // Descriptor of a display driver
  lv_disp_drv_init(&disp_drv);       // Basic initialization
  disp_drv.flush_cb = my_disp_flush; // Set your driver function
  disp_drv.draw_buf = &draw_buf;     // Assign the buffer
  disp_drv.hor_res  = screenWidth;   // horizontal resolution
  disp_drv.ver_res  = screenHeight;  // vertical resolution
  lv_disp_drv_register(&disp_drv);   // Finally register the driver
  lv_disp_set_bg_color(NULL,lv_color_hex(0x0000));// background black
}

//===================================================================== 
void my_touchpad_read( lv_indev_drv_t * indev_driver, 
                       lv_indev_data_t * data ){
  uint16_t touchX, touchY;
  bool touched = tft.getTouch( &touchX, &touchY);
  Serial.print(touchX);Serial.print(" ");Serial.println(touchY);
  if(touched){
    if(touchX < screenWidth && touchY < screenHeight){
      data->state = LV_INDEV_STATE_PR;
      data->point.x = touchX;
      data->point.y = touchY;
      Serial.printf("%d,%d\n", touchX, touchY);
    }
    else{ data->state = LV_INDEV_STATE_REL;}
  }
}

//Initialize the input device driver
void init_touch() {
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);
}

//=====================================================================
void setup(){
  adc_power_acquire(); // Bug fixes for GPIO39 and GPIO36
  Serial.begin(115200);
  tft.begin();
  tft.setRotation(0);       // USB Right
  tft.setBrightness(500);
  tft.setSwapBytes(true);
  lv_init();
  lv_disp_draw_buf_init(&draw_buf,buf[0],buf[1],screenWidth*70);
  init_display();
  init_touch();
  
  ui_init();
}

//=====================================================================
void loop(){
  lv_timer_handler(); delay(20);
}
