#include "DeltaRobotOne.h"

//Every robot has different values for servo-offset A,B,C and 
//tcp-offset X,Y,Z because of the variance between the servo motors

//Please adjust the offset values to your system properties
//DeltaRobotOne robot(A,B,C,X,Y,Z,LCD);

//If your display doesn't work try adress 0x3F

//Help: https://github.com/deltarobotone/how_to_build_your_robot/wiki/Step-5:-Servo-assembly

//Create the DeltaRobotOne-Object
DeltaRobotOne robot(0, 0, 0, 0, 0, 0, 0x27);

//Setup
void setup()
{
  //The robot.setup() function is required. 
  //Use this function in the first line of your setup function.
  robot.setup();

  //Clear the display
  robot.display.clear();

  //Print out some information on display
  robot.display.printLine1(F("Display"));

  //Wait for 1 second
  robot.functions.waitFor(1000);
}

//Loop
void loop()
{
  // This example shows you how to use the display of the robot
  // The are a few ways to use the display of the robot
  // We recommend to use the F("myText") function to store the Text on the flash of the arduino.
  // The basic way dont't clear the display so you have to do is by your own

  // Use line 1: display.printLine1(String text)
  robot.display.clear();
  robot.display.printLine1(F("Hello World"));

  //Wait for 2 seconds
  robot.functions.waitFor(2000);

  // An different way is to set the position of the text (default:0)
  // Use line 2: display.printLine1(String text, uint8_t position = 0)
  robot.display.clear();
  robot.display.printLine2(F("Hello"));
  robot.display.printLine2(F("World"),6);

  //Wait for 2 seconds
  robot.functions.waitFor(2000);
  
  // Use line 1 & 2: display.printLine2(String text, uint8_t position = 0)
  robot.display.clear();
  robot.display.printLine1(F("Hello"));
  robot.display.printLine2(F("World"));

  //Wait for 2 seconds
  robot.functions.waitFor(2000);

    // Use line 1 & 2 + Position 4: display.printLine2(String text, uint8_t position = 0)
  robot.display.clear();
  robot.display.printLine1(F("Hello"),4);
  robot.display.printLine2(F("World"),4);

  //Wait for 2 seconds
  robot.functions.waitFor(2000);

  // With the basic function you have all possible ways to print something out
  // display.printText(String text, uint8_t position = 0, uint8_t row = 0);

  robot.display.clear();
  robot.display.printText(F("Hello"),2,0); //Line 1 = 0
  robot.display.printText(F("World"),2,1); //Line 2 = 1

  //Wait for 2 seconds
  robot.functions.waitFor(2000);
}
