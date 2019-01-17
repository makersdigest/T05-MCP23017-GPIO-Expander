##
 # Maker's Digest
 #
 # MCP23017 GPIO Expander Example
 #
 # Dont forget to install the libraries! See README.md for details.
##
from time import sleep          # Import sleep from time
import Adafruit_GPIO.MCP230xx as MCP230XX # Import Adafruit MCP23017 Library

mcp = MCP230XX.MCP23017()       # Instantiate mcp object
dly = .25                       # Set delay of 1/4 second

# Setup Outputs. 
# We loop through all 16 GPIO to set them as GPIO.OUT, which
# needs to be referenced as MCP230XX.GPIO.OUT.
#
# If you are only using one or two of the GPIO pins on the 
# mcp23017, you can set them up for outputs individually as:
# mcp.setup(0, MCP230XX.GPIO.OUT)
# OR
# mcp.setup(0, MCP230XX.GPIO.IN)
#
# See Adafruit_Python_GPIO on github for more details on 
# using this library.
for x in range(0, 16):
    mcp.setup(x, MCP230XX.GPIO.OUT)

# Main Program
# Loop through all 16 GPIO to set high, then low.
def main():
    for x in range(0, 16):
        print "Flashing GPIO %d " % x
        mcp.output(x, 1)    # Set pin to HIGH (ON) (1)
        sleep(dly)
        mcp.output(x, 0)    # Set pin to LOW (OFF) (0)
        sleep(dly)

if __name__ == "__main__":
    main();
