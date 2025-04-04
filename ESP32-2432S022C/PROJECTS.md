# ESP32-2432S022C Example Projects

The ESP32-2432S022C board is a powerful platform for creating interactive projects, thanks to its display, touch controller, SD card support, and speaker. Below are some example projects to help you get started. These projects leverage the board's features and can be expanded based on your needs.

## Project 1: Display Sensor Data on the Screen

### Overview
Use the ST7789 display to show real-time sensor data, such as temperature and humidity, using a sensor like the DHT11 or BME280.

### Requirements
- ESP32-2432S022C board
- DHT11 or BME280 sensor
- Arduino IDE with ESP32 support
- Libraries: `TFT_eSPI` (for the display), `DHT` or `Adafruit_BME280`

### Steps
1. **Connect the Sensor**:
   - Connect the DHT11/BME280 to a free GPIO (e.g., GPIO23 for data).
   - Power the sensor with 3.3V and GND.
2. **Set Up the Display**:
   - Install the `TFT_eSPI` library in Arduino IDE.
   - Configure `User_Setup.h` in the library for the ST7789 display (set resolution to 240x320, adjust pin definitions as per the [Pinout Documentation](pinout.md)).
3. **Write the Code**:
   - Initialize the display and sensor.
   - Read sensor data every few seconds and display it on the screen.
   ```cpp
   #include <TFT_eSPI.h>
   #include <DHT.h>

   TFT_eSPI tft = TFT_eSPI();
   #define DHTPIN 23
   #define DHTTYPE DHT11
   DHT dht(DHTPIN, DHTTYPE);

   void setup() {
     tft.init();
     tft.setRotation(1); // Adjust rotation as needed
     tft.fillScreen(TFT_BLACK);
     tft.setTextColor(TFT_WHITE, TFT_BLACK);
     tft.setTextSize(2);
     dht.begin();
   }

   void loop() {
     float temp = dht.readTemperature();
     float hum = dht.readHumidity();
     tft.setCursor(10, 10);
     tft.printf("Temp: %.1f C", temp);
     tft.setCursor(10, 30);
     tft.printf("Hum: %.1f %%", hum);
     delay(2000);
   }
   ```
4. **Upload and Test**:
   - Upload the sketch and verify the sensor data is displayed.

### Expansion Ideas
- Add a graph to visualize temperature trends over time.
- Log data to the SD card for later analysis.

## Project 2: Touch-Controlled Smart Home Dashboard

### Overview
Create a touch-enabled dashboard using openHASP to control smart home devices (e.g., lights, fans) via MQTT.

### Requirements
- ESP32-2432S022C board
- MQTT broker (e.g., Mosquitto)
- Smart home devices (or simulate with LEDs)
- openHASP firmware

### Steps
1. **Flash openHASP Firmware**:
   - Download the latest openHASP firmware for ESP32 from [GitHub Actions](https://github.com/HASwitchPlate/openHASP/actions/workflows/build.yaml).
   - Flash the firmware using `esptool.py` or a similar tool.
2. **Configure openHASP**:
   - Connect the board to your Wi-Fi network via the openHASP web interface.
   - Design a dashboard layout with buttons and labels using openHASP's configuration files.
3. **Set Up MQTT**:
   - Configure openHASP to connect to your MQTT broker.
   - Map touch buttons to MQTT topics (e.g., `home/light1` to toggle a light).
4. **Test the Dashboard**:
   - Touch the buttons on the screen to control devices.
   - Verify the MQTT messages are sent and received correctly.

### Expansion Ideas
- Add status indicators for device states (e.g., light on/off).
- Integrate with Home Assistant for a full smart home solution.

## Project 3: Play Audio Tones Through the Speaker

### Overview
Use the speaker to play simple tones or melodies, such as a startup sound or alert.

### Requirements
- ESP32-2432S022C board
- Arduino IDE with ESP32 support
- Library: `ToneESP32` (or use the built-in `tone()` function)
- Speaker with 2 pin 1.25mm pitch connector

### Steps
1. **Verify Speaker Pin**:
   - The speaker should be connected to GPIO26 (see [Pinout Documentation](PINOUT.md)).
2. **Write the Code**:
   - Use the `tone()` function to generate a simple melody.
   ```cpp
   #define SPEAKER_PIN 26

   void setup() {
     pinMode(SPEAKER_PIN, OUTPUT);
   }

   void loop() {
     tone(SPEAKER_PIN, 261); // C4 note
     delay(500);
     tone(SPEAKER_PIN, 293); // D4 note
     delay(500);
     tone(SPEAKER_PIN, 329); // E4 note
     delay(500);
     noTone(SPEAKER_PIN);
     delay(1000);
   }
   ```
3. **Upload and Test**:
   - Upload the sketch and listen for the melody through the speaker.

### Expansion Ideas
- Play a full song by defining a melody array with notes and durations.
- Read audio files from the SD card and play them (requires additional libraries like `ESP32-audioI2S`).

## Project 4: SD Card Data Logger

### Overview
Log sensor data (e.g., temperature) to the SD card for later retrieval.

### Requirements
- ESP32-2432S022C board
- MicroSD card
- DHT11 sensor (optional)
- Arduino IDE with ESP32 support
- Library: `SD` (built into Arduino ESP32 core)

### Steps
1. **Connect the Sensor** (optional):
   - Use GPIO23 for the DHT11 data pin, if logging sensor data.
2. **Write the Code**:
   - Initialize the SD card and write data to a file.
   ```cpp
   #include <SD.h>
   #include <SPI.h>

   #define SD_CS 5

   void setup() {
     Serial.begin(115200);
     if (!SD.begin(SD_CS)) {
       Serial.println("SD Card initialization failed!");
       return;
     }
     Serial.println("SD Card initialized.");
   }

   void loop() {
     File file = SD.open("/log.txt", FILE_APPEND);
     if (file) {
       file.println("Timestamp: " + String(millis()));
       file.close();
       Serial.println("Data logged.");
     } else {
       Serial.println("Error opening file.");
     }
     delay(5000);
   }
   ```
3. **Upload and Test**:
   - Upload the sketch, insert an SD card, and check for the `log.txt` file.

### Expansion Ideas
- Log touch events or display interactions to the SD card.
- Create a web server to download the log file over Wi-Fi.

## Additional Resources

- For a detailed pinout, refer to the [Pinout Documentation](PINOUT.md).
- For supported software and firmware links, see the [Software Compatibility Table](SUPPORTED.md).
- Explore the ESP32 community for more project ideas on [Reddit](https://www.reddit.com/r/esp32/) or the [Espressif Forum](https://esp32.com/).
