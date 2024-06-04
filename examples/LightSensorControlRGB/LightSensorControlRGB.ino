// This code shows how to control the RGB brightness by the level of the ambiet light level.
// the darker the ambient light, the brighter the RGB gets and vise versa.

#include <BMS3.h> //include the bee motion s3 helper library

BMS3 bms3;  //pull the BMS3 class from the helper and name it bms3 so we can use it below

void setup() {

  Serial.begin(115200);
  
  bms3.begin();  // Initalize the helper library. if you fail to do this the program will not work as intended.
  
}

void loop() {
  float lightLevel = bms3.getLight(); //get the ambient light level
  Serial.println(lightLevel); // print the light level so we can reference it.
  int rgbLevel = map(lightLevel, .3, 2.0, 255, 0); //map the light level input to a range between 255 - 0
 bms3.setPixelBrightness(rgbLevel); // set the RGB brihtness to that mapped brightness level based on ambiet light level
bms3.setPixelColor(blue); //turn on the RGB to Blue or whatever other color you'd like

  

}
