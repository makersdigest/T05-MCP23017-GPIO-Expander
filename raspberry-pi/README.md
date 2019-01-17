# MCP 23017 GPIO Expander
## Raspberry Pi Example
In this example, we loop through every one of the GPIO pins and set it to an output. Then we loop back through them and set them HIGH for a 1/4 second, then LOW for a 1/4 second. If you only have one LED to test with, you can connect it to any one of the GPIO pins and it will flash when the loop gets to it.

### Pinout
![Raspberry Pi Pinout](raspberrypi-pinout-GH.jpg)

### Installation & Configuration

#### Install Adafruit_GPIO python module
See instructions on module GitHub repo [here](https://github.com/adafruit/Adafruit_Python_GPIO).

#### Enable I2C on Raspberry Pi
1. Run: `sudo raspi-config`
2. Select 'Interfacing Options'
3. Select 'I2C Enable/Disable automatic loading of I2C kernel module'
4. Select '<Yes>' for 'Would you like the ARM I2C interface to be enabled?'
5. Select '<Ok>'
6. Select '<Finish>'

Done!
