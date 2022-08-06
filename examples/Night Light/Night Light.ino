// This code shows how to use the Bee Motion S3 as a night light

#include <BMS3.h> //include the bee motion s3 helper library

BMS3 bms3;  //pull the BMS3 class from the helper and name it bms3 so we can use it below

void setup() {

  Serial.begin(115200);
  
  bms3.begin();  // Initalize the helper library. if you fail to do this the program will not work as intended.
  
}

void loop() {
 
 // while motion is being detected
 while(digitalRead(PIR) == HIGH){
  
// check if its dark in the room
     if(bms3.getLight() <= .40){
// if its dark, then turn on the RGB LED
    bms3.setPixelColor(blue);
  }
// if its not dark, then turn off the RGB LED
 bms3.setPixelColor(off);

 }
}
