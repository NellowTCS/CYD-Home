# ESP32-2432S022C Pinout

The ESP32-2432S022C is a development board based on the ESP32-WROOM-32 module, featuring a 240x320 ST7789 display, CST816S touch controller, SD card support, and a speaker. It supports various peripherals like I2C, SPI, UART, and touch sensors.

## Pinout Table

| Pin Number | Pin Name | Primary Function        | Alternate Functions                     | Notes                                      |
|------------|----------|-------------------------|-----------------------------------------|--------------------------------------------|
| 1          | 3.3V     | Power (3.3V)            | -                                       | Power supply pin                          |
| 2          | EN       | Enable/Reset            | -                                       | Reset pin                                 |
| 3          | GPIO36   | GPIO36                  | ADC1_CH0, SENSOR_VP                     | Analog input                              |
| 4          | GPIO39   | GPIO39                  | ADC1_CH3, SENSOR_VN                     | Analog input                              |
| 5          | GPIO34   | GPIO34                  | ADC1_CH6                                | Analog input                              |
| 6          | GPIO35   | GPIO35                  | ADC1_CH7                                | Analog input                              |
| 7          | GPIO33   | GPIO33                  | ADC1_CH5                                | ST7789 I80 D14 (Display Data)             |
| 8          | GPIO32   | GPIO32                  | ADC1_CH4                                | ST7789 I80 D15 (Display Data)             |
| 9          | GPIO25   | GPIO25                  | ADC2_CH8, DAC1                          | ST7789 I80 D13 (Display Data)             |
| 10         | GPIO26   | GPIO26                  | ADC2_CH9, DAC2                          | Speaker (SPEAK)                           |
| 11         | GPIO27   | GPIO27                  | ADC2_CH7, TOUCH7                        | ST7789 I80 D12 (Display Data)             |
| 12         | GPIO14   | GPIO14                  | ADC2_CH4, TOUCH4, HSPI_MOSI             | ST7789 I80 D11 (Display Data)             |
| 13         | GPIO12   | GPIO12                  | ADC2_CH2, TOUCH2, RTC_GPIO12            | ST7789 I80 D10 (Display Data)             |
| 14         | GPIO13   | GPIO13                  | ADC2_CH3, TOUCH3, RTC_GPIO13            | ST7789 I80 D9 (Display Data)              |
| 15         | GND      | Ground                  | -                                       | Ground pin                                |
| 16         | GPIO15   | GPIO15                  | ADC2_CH5, TOUCH5, RTC_GPIO15            | ST7789 I80 D8 (Display Data)              |
| 17         | GPIO2    | GPIO2                   | ADC2_CH1, TOUCH1, RTC_GPIO2             | ST7789 RD (Read Signal)                   |
| 18         | GPIO0    | GPIO0                   | RTC_GPIO0                               | Backlight Control                         |
| 19         | GPIO4    | GPIO4                   | ADC2_CH0, TOUCH0, RTC_GPIO4             | ST7789 I80 WR (Write Signal)              |
| 20         | GPIO16   | GPIO16                  | UART2_RX, VSPI_CS0                      | ST7789 I80 DC (Data/Command)              |
| 21         | GPIO17   | GPIO17                  | UART2_TX, VSPI_CS0                      | ST7789 I80 CS (Chip Select)               |
| 22         | GPIO5    | GPIO5                   | VSPI_CLK                                | TF_CS (SD Card Chip Select)               |
| 23         | GPIO18   | GPIO18                  | VSPI_MISO                               | TF_SPI_SCLK (SD Card Clock)               |
| 24         | GPIO19   | GPIO19                  | VSPI_MOSI                               | TF_SPI_MISO (SD Card MISO)                |
| 25         | GND      | Ground                  | -                                       | Ground pin                                |
| 26         | GPIO22   | GPIO22                  | I2C_SCL                                 | CST816S I2C SCL (Touch Controller)        |
| 27         | GPIO21   | GPIO21                  | I2C_SDA                                 | CST816S I2C SDA (Touch Controller)        |
| 28         | GPIO1    | GPIO1                   | UART0_TX                                | Serial TX                                 |
| 29         | GPIO3    | GPIO3                   | UART0_RX                                | Serial RX                                 |
| 30         | GPIO23   | GPIO23                  | -                                       | TF_SPI_MOSI (SD Card MOSI)                |
| 31         | GND      | Ground                  | -                                       | Ground pin                                |
| 32         | GPIO6    | GPIO6                   | SCK/CLK                                 | -                                         |
| 33         | GPIO7    | GPIO7                   | SDO/SD0                                 | -                                         |
| 34         | GPIO8    | GPIO8                   | SDI/SD1                                 | -                                         |
| 35         | GPIO9    | GPIO9                   | SHD/SD2                                 | -                                         |
| 36         | GPIO10   | GPIO10                  | SWP/SD3                                 | -                                         |
| 37         | GPIO11   | GPIO11                  | CSC/CMD                                 | -                                         |
| 38         | GND      | Ground                  | -                                       | Ground pin                                |
| 39         | VIN      | Power (5V)              | -                                       | Power supply pin                          |

## Pin Function Legend

- **GPIO**: General Purpose Input/Output pins.
- **ADC**: Analog-to-Digital Converter channels (e.g., ADC1_CH0, ADC2_CH0).
- **TOUCH**: Capacitive touch sensor pins (e.g., TOUCH0, TOUCH1).
- **DAC**: Digital-to-Analog Converter channels (e.g., DAC1, DAC2).
- **RTC_GPIO**: Real-Time Clock GPIO pins.
- **I2C**: Inter-Integrated Circuit pins (SDA, SCL).
- **SPI**: Serial Peripheral Interface pins (VSPI, HSPI, SCK, MOSI, MISO, CS).
- **UART**: Universal Asynchronous Receiver/Transmitter pins (TX, RX).
- **SENSOR_VP/SENSOR_VN**: Analog sensor input pins.
- **EN**: Enable pin for resetting the board.
- **GND**: Ground pins.
- **3.3V/5V**: Power supply pins.

## Display (ST7789 I80 Interface)

The board features a 240x320 ST7789 display using an 8-bit I80 (parallel) interface. The pin assignments are:

- **GPIO0**: Backlight control.
- **GPIO16**: Data/Command (DC) signal.
- **GPIO4**: Write (WR) signal.
- **GPIO17**: Chip Select (CS).
- **GPIO2**: Read signal (RD).
- **Data Pins** (8-bit parallel):
  - D8: GPIO15
  - D9: GPIO13
  - D10: GPIO12
  - D11: GPIO14
  - D12: GPIO27
  - D13: GPIO25
  - D14: GPIO33
  - D15: GPIO32

The display operates at 12 MHz with a color space of RGB and 16 bits per pixel.

## Touch Controller (CST816S)

The board includes a CST816S touch controller connected via I2C:

- **GPIO21**: I2C SDA (`CST816S_I2C_CONFIG_SDA_IO_NUM`).
- **GPIO22**: I2C SCL (`CST816S_I2C_CONFIG_SCL_IO_NUM`).
- I2C clock speed: 400 kHz (`CST816S_I2C_CONFIG_MASTER_CLK_SPEED=400000`).
- Touch resolution: 240x320 (`CST816S_TOUCH_CONFIG_X_MAX`, `CST816S_TOUCH_CONFIG_Y_MAX`).
- No reset or interrupt pins are assigned (`GPIO_NUM_NC`).

## SD Card (TF Card)

The SD card interface uses SPI:

- **GPIO5**: Chip Select (`TF_CS`).
- **GPIO23**: MOSI (`TF_SPI_MOSI`).
- **GPIO18**: SCLK (`TF_SPI_SCLK`).
- **GPIO19**: MISO (`TF_SPI_MISO`).

## Speaker

- **GPIO26**: Speaker output (`SPEAK`).

## Notes

1. **Power Pins**: The board can be powered via the 3.3V or 5V (VIN) pins. Ensure proper voltage levels to avoid damaging the board.
2. **Touch Pins**: The ESP32-S2 supports capacitive touch sensing on pins labeled TOUCH0 to TOUCH9. The CST816S touch controller is used for the display.
3. **ADC Channels**: ADC1 and ADC2 channels are available for analog input. Note that some ADC2 channels are shared with touch functionality.
4. **SPI/I2C/UART**: The board supports multiple communication protocols. Ensure proper configuration in your code to use these interfaces.
5. **Boot Mode**: GPIO0 is used for backlight control but is also typically involved in boot mode selection.
6. **Display Configuration**: The ST7789 display uses an 8-bit parallel I80 interface, which occupies several GPIO pins.
7. **Speaker**: GPIO26 is dedicated to the speaker output, for audio playback.

## Schematic Overview

The schematic provided includes additional components like:
- **USB-to-TTL (UART)** for serial communication (for programming and debugging).
- **Power Management** with 3.3V regulation and battery charging circuitry for a lithium battery.
- **SD Card Interface** connected via SPI (pins GPIO5, GPIO18, GPIO19, GPIO23).
- **Capacitive Touch** (CST816S via I2C on GPIO21 and GPIO22).
- **LCD** (ST7789 via I80 interface on multiple GPIOs).
- **Audio Output** (speaker on GPIO26).

For detailed usage, refer to the ESP32-S2 datasheet and the board's documentation in /Manufacturer Documentations/2.2inch_ESP32-2432S022/5-Schematic for specific hardware configurations.
