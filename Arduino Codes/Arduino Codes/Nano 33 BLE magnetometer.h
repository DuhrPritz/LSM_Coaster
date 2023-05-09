// Arduino_LSM9DS1 - Version: Latest 
#include <Arduino_LSM9DS1.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);
}

void loop() {
  if (IMU.magneticFieldAvailable())
  {
    float x,y,z;
    IMU.readMagneticField(x, y, z);
    Serial.print(x);
    Serial.print('\t');
    Serial.print(y);
    Serial.print('\t');
    Serial.println(z);
    Serial.println("test");
    delay(500);
  }
}
