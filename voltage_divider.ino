#include <LiquidCrystal.h>
const float Voltpin= A0;
LiquidCrystal lcd (12,11,5,4,3,2);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16,2);
  lcd.print("R");

}

void loop() {
  // put your main code here, to run repeatedly:
  float V1 = analogRead(Voltpin);


  float V2 = (V1/1024)*5;
  float I = (5-V2)/10000;
  float R = (V2/I);
  float I2 = I*1000000;

  //Serial.print(V2);
  //Serial.print("volts,");

  //Serial.print(I2);
  //Serial.print("MicroAmps");
    
   Serial.print(R);
   Serial.print("ohms");
    delay(5000000000);
   
  
  }
