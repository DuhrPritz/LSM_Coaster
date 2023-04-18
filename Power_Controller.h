// ACS712 - Version: Latest 
#include <ACS712.h>


// Mosfet A--pwm
int mM = 10;
int mA = 11;
int mB = 12;
int mC = 13;
// volt check
int vM = 0; //A7
int vA = 0; //A6
int vB = 0; //A5
int vC = 0; //A4
// current check
ACS712 sensorM(ACS712_30A, A3); //A3
ACS712 sensorA(ACS712_30A, A2); //A2
ACS712 sensorB(ACS712_30A, A1); //A1
ACS712 sensorC(ACS712_30A, A0); //A0
//Shared values 
float R1 = 30000.0;
float R2 = 7500.0; 
float ref_voltage = 5.0;
//Master
float adc_voltageM = 0.0;
float in_voltageM = 0.0;
int adc_valueM = 0;
//output A
float adc_voltageA = 0.0;
float in_voltageA = 0.0;
int adc_valueA = 0;
//output B
float adc_voltageB = 0.0;
float in_voltageB = 0.0;
int adc_valueB = 0;
//Check out put C
float adc_voltageC = 0.0;
float in_voltageC = 0.0;
int adc_valueC = 0;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  sensorM.calibrate();
  sensorA.calibrate();
  sensorB.calibrate();
  sensorC.calibrate();  
}

void voltCheck() {
  //Shared values 
  float R1 = 30000.0;
  float R2 = 7500.0; 
  float ref_voltage = 5.0;
  //Master
  float adc_voltageM = 0.0;
  float in_voltageM = 0.0;
  int adc_valueM = 0;
  //output A
  float adc_voltageA = 0.0;
  float in_voltageA = 0.0;
  int adc_valueA = 0;
  //output B
  float adc_voltageB = 0.0;
  float in_voltageB = 0.0;
  int adc_valueB = 0;
  //Check out put C
  float adc_voltageC = 0.0;
  float in_voltageC = 0.0;
  int adc_valueC = 0;
  adc_valueM = analogRead(A7);
  in_voltageM = adc_voltageM / (R2/(R1+R2)) ; 
  Serial.print("Input Voltage = ");
  Serial.println(in_voltageM, 2);

  adc_valueA = analogRead(A6);
  in_voltageA = adc_voltageA / (R2/(R1+R2)) ; 
  Serial.print("Input Voltage = ");
  Serial.println(in_voltageA, 2);

  adc_valueB = analogRead(A5);
  in_voltageB = adc_voltageB / (R2/(R1+R2)) ; 
  Serial.print("Input Voltage = ");
  Serial.println(in_voltageB, 2);

  adc_valueC = analogRead(A4);
  in_voltageC = adc_voltageC / (R2/(R1+R2)) ; 
  Serial.print("Input Voltage = ");
  Serial.println(in_voltageC, 2);
}

void currentCheck(){
  float currentM = sensorM.getCurrentDC();
  Serial.print("Current M: ");
  Serial.println(currentM);
  float currentA = sensorA.getCurrentDC();
  Serial.print("Current A: ");
  Serial.println(currentA);
  float currentB = sensorB.getCurrentDC();
  Serial.print("Current B: ");
  Serial.println(currentB);
  float currentC = sensorC.getCurrentDC();
  Serial.print("Current C: ");
  Serial.println(currentC);
}

void loop() {
  voltCheck();
  currentCheck();
  delay(300);
}


