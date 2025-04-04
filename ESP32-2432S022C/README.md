# ESP32-2432S022C Development Board

The ESP32-2432S022C is a versatile development board based on the **ESP32-WROOM-32** module by Sunton. It features a 240x320 ST7789 display, CST816S touch controller, SD card support, and a speaker, making it ideal for IoT projects, home automation, and interactive displays. With built-in Wi-Fi, a variety of GPIO pins, and support for multiple communication protocols (I2C, SPI, UART), this board is perfect for hobbyists and developers looking to create touch-enabled applications.

## Features

- **Microcontroller**: ESP32-WROOM-32 (dual-core, 240 MHz)
- **Display**: 240x320 ST7789 TFT LCD with 8-bit I80 interface
- **Touch**: CST816S capacitive touch controller (I2C)
- **Storage**: MicroSD card slot (SPI interface)
- **Audio**: Built-in speaker for simple audio output
- **Connectivity**: Wi-Fi (802.11 b/g/n)
- **Memory**: 4MB Flash, 520KB SRAM
- **Power**: 3.3V or 5V via USB-C or VIN pin
- **GPIO**: Multiple GPIO pins with ADC, touch, and communication capabilities

## Getting Started

### Prerequisites

- **Hardware**: ESP32-2432S022C board, USB-C cable
- **Software**:
  - Arduino IDE or PlatformIO with ESP32 support
  - ESP-IDF (optional for advanced users)
  - USB-to-Serial drivers (e.g., CP210x or CH340, depending on your board's chip)

### Installation (Arduino IDE)

1. **Set Up Your Development Environment**:
   - Install the [Arduino IDE](https://www.arduino.cc/en/software) or [PlatformIO](https://platformio.org/).
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

### Installation (ESP-IDF)

For advanced users who prefer to use the ESP-IDF framework:

1. **Install ESP-IDF**:
   - Follow the [official ESP-IDF setup guide](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html) for your operating system (Windows, macOS, or Linux).
   - Ensure you have the latest stable release of ESP-IDF compatible with the ESP32.

2. **Configure the Project**:
   - Create a new project or use an example from the ESP-IDF repository (e.g., `get-started/hello_world`).
   - Run `idf.py menuconfig` to configure project settings, such as flash size (4MB) and partition table (default).

3. **Build and Flash**:
   - Build the project with:
     ```
     idf.py build
     ```
   - Flash the firmware to the board with:
     ```
     idf.py -p /dev/ttyUSB0 flash
     ```
     (Replace `/dev/ttyUSB0` with your serial port, e.g., `COM3` on Windows.)
   - Monitor the output with:
     ```
     idf.py -p /dev/ttyUSB0 monitor
     ```

4. **Customizing for ESP32-2432S022C**:
   - The ST7789 display, CST816S touch controller, SD card, and speaker require specific drivers or configurations. Refer to the [Pinout Documentation](PINOUT.md) for GPIO assignments.
   - You may need to integrate libraries (e.g., for the display or touch) into your ESP-IDF project.

## Pinout

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
