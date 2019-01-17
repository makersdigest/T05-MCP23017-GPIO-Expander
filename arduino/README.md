# MCP23017 GPIO Expander
## Arduino Exmaple code
In this example, we loop through every one of the GPIO pins and set it to an output. Then we loop back through them and set them HIGH for a 1/4 second, then LOW for a 1/4 second. If you only have one LED to test with, you can connect it to any one of the GPIO pins and it will flash when the loop gets to it.

### Pinout
![Arduino Pinout](arduino-pinout-GH.jpg)

### Installation & Configration

#### Install the Adafruit MCP23017 library
1. Open the Arduino IDE
2. Select 'Sketch' -> 'Include Library' -> 'Manage Libraries'
3. Search for '23017'
4. Click 'Install' button for the 'Adafruit MCP23017 Arduino Library...'

Done!
