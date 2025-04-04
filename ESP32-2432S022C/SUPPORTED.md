## Software Compatibility for ESP32-2432S022C

The ESP32-2432S022C board supports various software frameworks for different use cases, such as home automation, display interfaces, and IoT applications. Below is a table summarizing the supported software, their status, webflash availability, and firmware download links.

| Software | Description | Support Status | Webflash | Firmware Download |
|----------|-------------|----------------|----------|-------------------|
| **[CYD-Klipper](https://github.com/suchmememanyskill/CYD-Klipper)** | A Klipper firmware adaptation for Cheap Yellow Displays (CYD), enabling 3D printer control with a touchscreen interface. | Developer Preview (requires building from source, see [PR #164](https://github.com/suchmememanyskill/CYD-Klipper/pull/164)) | Not available | Not available |
| **[openHASP](https://github.com/HASwitchPlate/openHASP)** | A Home Automation Switch Plate framework for creating customizable touch interfaces for home automation systems. | Officially Supported | Not available in webflash | [Latest GitHub Actions Build](https://github.com/HASwitchPlate/openHASP/actions/workflows/build.yaml) |
| **[M5-Stick Launcher](https://github.com/bmorcelli/M5Stick-Launcher)** | A launcher application for ESP32-based devices with displays, providing a user-friendly interface for launching apps. | Officially Supported | [Webflash Link](https://bmorcelli.github.io/M5Stick-Launcher/) | [Releases](https://github.com/bmorcelli/M5Stick-Launcher/releases/) |
| **[Tactility](https://github.com/ByteWelder/Tactility)** | A framework for building tactile, touch-based interfaces on ESP32 devices with displays. | Not Supported (planned for future release) | [Webflash Link](https://install.tactility.one) | [Releases](https://github.com/ByteWelder/Tactility/releases) |

### Notes

- **Support Status**:
  - "Officially Supported" indicates that the software has been tested and is fully compatible with the ESP32-2432S022C.
  - "Developer Preview" means the software is in development and may require manual building or have limited functionality.
  - "Not Supported" indicates that the software is not yet compatible but may be in the future.
- **Webflash**: Links to browser-based flashing tools for easy firmware installation. If "Not available," firmware must be installed manually using tools like `esptool.py` or an IDE.
- **Firmware Download**: Links to pre-built firmware binaries. For projects like CYD-Klipper, you may need to build the firmware yourself following the project's instructions.

### Recommendations

- For home automation projects, **openHASP** is a great choice due to its official support and active development.
- If you prefer a simple launcher interface, **M5-Stick Launcher** offers both webflash and pre-built firmware for easy setup.
- **CYD-Klipper** is ideal for 3D printing enthusiasts but requires more technical expertise to set up.
- Keep an eye on **Tactility** for future support, as it promises a modern touch interface framework.
