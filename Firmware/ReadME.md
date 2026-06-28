# How to Install OnStep on your ESP32

To get this firmware running on your microcontroller, follow these steps:

### 1. Download the OnStep Source Code
Because OnStep is actively updated, you need to grab the source directly from the official repository:
* Download the official source code from the [OnStep GitHub Repository](https://github.com/hjd1964/OnStepX).

### 2. Swap the Configuration Files
Before compiling, you must overwrite OnStep's generic templates with the custom hardware configurations built for this specific telescope project:
1. Copy the `Config.h` and `PinMap.h` files from *this* folder.
2. Paste them into the main directory of the downloaded OnStep source folder, replacing the default files.

### 3. Set Up Your Arduino IDE
If you haven't configured your Arduino IDE for ESP32 development yet, set it up using these steps:
1. Open Arduino IDE and go to **File** > **Preferences**.
2. In the *Additional Boards Manager URLs* field, paste the official ESP32 link:
   `https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json`
3. Go to **Tools** > **Board** > **Boards Manager...**, search for **esp32** by Espressif, and click **Install**.

### 4. Compile and Flash
1. Open the main OnStep project file (`.ino`) in your Arduino IDE.
2. Connect your ESP32 to your computer using a data-capable USB cable.
3. In the IDE menu, go to **Tools** > **Board** and select your specific module (typically **ESP32 Dev Module**).
4. Select the correct COM port under **Tools** > **Port**.
5. Click the **Upload** arrow button in the top left. 

Once the IDE finishes compilation and says *Done Uploading*, the ESP32 will reboot and immediately begin hosting a Wi-Fi hotspot named `RTelescope`.