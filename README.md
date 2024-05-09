| ESP32-2432S028R | JC4827W543R |
| --- | --- |
|<video width="240" height="320" src="https://github.com/calint/arduino-bam/assets/1920811/71fd5f8a-06ba-4bce-b2bf-39657d363bec"></video>|<video width="240" height="320" src="https://github.com/calint/arduino-bam/assets/1920811/32abe0e8-c77e-43c0-b267-07a052e54f4e"></video>|

# arduino-bam

a toy game for trying out devices and compare performances

## Arduino IDE 2.3.2
* additional boards `https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json`
* select board for device:
  - `ESP32 Dev Module` for `ESP32-2432S028R`
  - `ESP32S3 Dev Module` for `JC4827W543R`

## howto
* `bam/devices.hpp` contains a list of tested devices
* uncomment the include for your device and comment out the rest
* if your device is not there then create a new one by:
  - creating an include file in `bam/devices/` based on an existing one
  - adding the file as an include in `bam/devices.hpp`
* supports resistive touch screens using `library/XPT2046_Touchscreen`
* supports a wide array of displays and buses using `library/Arduino_GFX`
  - buses ESP32SPI, E32SPIDMA and ESP32QSPI support asynchronous DMA transfers for increased performance
