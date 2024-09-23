# ESP8266_LCD_Interface

This project demonstrates how to use an ESP8266 to control a 128x64 LCD using the U8g2 library. The program displays a progress bar and a status message on the screen.

## Features

- Displays a progress bar on the screen.
- Shows a completion message when the progress is done.
- Uses the [U8g2](https://github.com/olikraus/u8g2) library for LCD control.

## Requirements

- **Hardware**: 
  - ESP8266 (NodeMCU, D1 Mini, or similar)
  - 128x64 LCD screen (ST7920 controller)
  - Jumper wires for connections
  
- **Software**:
  - [Arduino IDE](https://www.arduino.cc/en/software)
  - Install the [U8g2](https://github.com/olikraus/u8g2) library
  
## Connections

| ESP8266 Pin | LCD Pin |
|-------------|---------|
| GPIO 14     | SCL     |
| GPIO 13     | SDA     |
| GPIO 15     | CS      |
| GND         | GND     |
| 3.3V        | VCC     |

## Usage

1. Clone this repository:
   ```bash
   https://github.com/Yamil-Serrano/ESP8266_LCD_Interface.git
