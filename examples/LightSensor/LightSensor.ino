/* This code shows how to use the built in light sensor.
this could be handy if you only wanted to run code only when its dark out for instance
*/

#include <BMS3.h> //include the bee motion s3 helper library

BMS3 bms3;  //pull the BMS3 class from the helper and name it bms3 so we can use it below

void setup() {
  Serial.begin(115200);

  bms3.begin();  // Initalize the helper library. if you fail to do this the program will not work as intended.
}

void loop() {
  // Light sensor voltage goes up to about 3.3v
  float light = bms3.getLight();

  // View this with the arduino serial plotter (in the tools menu) to see a graph
  // Or view it in the Serial Monitor to get exact values.
  Serial.println(light);

  delay(50);
}