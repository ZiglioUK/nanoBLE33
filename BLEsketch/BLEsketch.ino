#include <ArduinoBLE.h>
#include <Arduino_LSM9DS1.h>

BLEService customService("180C");


void setup() {
  IMU.begin();

  Serial.begin(9600);
  while(!Serial);

  if( !BLE.begin() ){
    Serial.println("BLE Init failure");
    delay(500);
    while(1);
  }

  BLE.setLocalName("Arduino BLE");
  
}

void loop() {

}
