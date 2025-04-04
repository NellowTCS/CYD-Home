# ESP32-2432S022C Development Board

The ESP32-2432S022C is a versatile development board based on the ESP32-S2-WROOM-32 module by Sunton. It features a 240x320 ST7789 display, CST816S touch controller, SD card support, and a speaker, making it ideal for IoT projects, home automation, and interactive displays. With built-in Wi-Fi, a variety of GPIO pins, and support for multiple communication protocols (I2C, SPI, UART), this board is perfect for hobbyists and developers looking to create touch-enabled applications.

## Features

- **Microcontroller**: ESP32-S2-WROOM-32 (single-core, 240 MHz)
- **Display**: 240x320 ST7789 TFT LCD with 8-bit I80 interface
- **Touch**: CST816S capacitive touch controller (I2C)
- **Storage**: MicroSD card slot (SPI interface)
- **Audio**: Built-in speaker for simple audio output
- **Connectivity**: Wi-Fi (802.11 b/g/n)
- **Memory**: 4MB Flash, 320KB SRAM
- **Power**: 3.3V or 5V via USB-C or VIN pin
- **GPIO**: Multiple GPIO pins with ADC, touch, and communication capabilities

## Getting Started

### Prerequisites

- **Hardware**: ESP32-2432S022C board, USB-C cable
- **Software**: 
  - Arduino IDE or PlatformIO with ESP32 support
  - ESP-IDF (optional for advanced users) 
  - USB-to-Serial drivers

### Installation

1. **Set Up Your Development Environment**:
   - Install the Arduino IDE or PlatformIO.
   - Add ESP32 board support:
     - In Arduino IDE, go to `File > Preferences`, add the following URL to "Additional Boards Manager URLs":
       ```
       https://raw.githubusercontent.com/espressif/arduino-esp32/master/package_esp32_index.json
       ```
     - Go to `Tools > Board > Boards Manager`, search for "ESP32", and install the package by Espressif.
   - For PlatformIO, the ESP32 framework is automatically available.

2. **Select the Board**:
   - In Arduino IDE, select `ESP32 Dev Module` under `Tools > Board > ESP32 Arduino`.
   - Adjust settings (e.g., Flash Size: 4MB, Partition Scheme: Default).

3. **Upload a Test Sketch**:
   - Open a simple example like `File > Examples > Basics > Blink`.
   - Modify the LED pin to a free GPIO (e.g., GPIO23, as many pins are used for the display and touch).
   - Upload the sketch and verify the board is working.

### Pinout

For a detailed pinout, including GPIO functions and assignments for the display, touch, SD card, and speaker, refer to the [Pinout Documentation](PINOUT.md). A brief overview:

- **Display**: Uses GPIO0 (backlight), GPIO16 (DC), GPIO4 (WR), GPIO17 (CS), and GPIO15/13/12/14/27/25/33/32 (data).
- **Touch**: I2C on GPIO21 (SDA) and GPIO22 (SCL).
- **SD Card**: SPI on GPIO5 (CS), GPIO23 (MOSI), GPIO18 (SCLK), GPIO19 (MISO).
- **Speaker**: GPIO26.

## Supported Software

The ESP32-2432S022C supports various software frameworks for different use cases. For a full list, including webflash and firmware download links, see the [Software Compatibility Table](SUPPORTED.md). Highlights include:

- **openHASP**: For home automation touch interfaces.
- **M5-Stick Launcher**: A user-friendly app launcher.
- **CYD-Klipper**: For 3D printer control (developer preview).
- **Tactility**: A touch interface framework (upcoming support).

## Example Projects

Check out the [Projects Documentation](projects.md) for example projects, including:
- Displaying sensor data on the screen.
- Creating a touch-controlled smart home dashboard.
- Playing audio tones through the speaker.

## Resources

- **Official Product Page**: [AliExpress](https://www.aliexpress.com/item/1005006284154750.html)
- **ESP32 Datasheet**: [Espressif Documentation](https://www.espressif.com/sites/default/files/documentation/esp32_datasheet_en.pdf)
- **Community Support**: Join the ESP32 community on [Reddit](https://www.reddit.com/r/esp32/) or the [Espressif Forum](https://esp32.com/).
