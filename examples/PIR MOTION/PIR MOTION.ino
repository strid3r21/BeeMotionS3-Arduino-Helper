#include <BMS3.h> //include the bee motion s3 helper library

BMS3 bms3;  //pull the BMS3 class from the helper and name it bms3 so we can use it below

void setup() {

  Serial.begin(115200);
  
  bms3.begin();  //initalize the helper library. if you fail to do this the program will not work as intended.


}
void loop() {
 
 //just digital read PIR to monitor motion. if its HIGH its seen something and if its LOW its not.
  if(digitalRead(PIR) == HIGH){   
   bms3.setPixelColor(blue);
  delay(500); 
  }else{
    Serial.println("i dont see anything");
    bms3.setPixelColor(off);
    delay(1000);
  }


               
}
