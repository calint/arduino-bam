# arduino-bam

a toy game for trying out devices and compare performances

## howto
* `bam/devices.hpp` contains a list of tested devices
* uncomment the include for your device and comment out the rest
* if your device is not there then create a new one by:
  - creating an include file in `bam/devices/` based on an existing one
  - adding the file as an include in `bam/devices.hpp`
* supports resistive touch screens using `library/XPT2046_Touchscreen`
* supports a wide array of displays and buses using `library/Arduino_GFX`
  - buses ESP32SPI and ESP32QSPI support asynchronous DMA transfers for increased performance
