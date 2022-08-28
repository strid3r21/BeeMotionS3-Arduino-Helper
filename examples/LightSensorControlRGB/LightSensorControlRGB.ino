// This code shows how to use the Bee Motion S3 as a night light

#include <BMS3.h> //include the bee motion s3 helper library

BMS3 bms3;  //pull the BMS3 class from the helper and name it bms3 so we can use it below

void setup() {

  Serial.begin(115200);
  
  bms3.begin();  // Initalize the helper library. if you fail to do this the program will not work as intended.
  
}

void loop() {
  float lightLevel = bms3.getLight();
  Serial.println(lightLevel);
  int rgbLevel = map(lightLevel, .3, 1.2, 255, 0);
 bms3.setPixelBrightness(rgbLevel);
bms3.setPixelColor(blue);

  

}
