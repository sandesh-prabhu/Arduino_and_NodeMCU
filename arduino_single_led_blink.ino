#include<Servo.h>
Servo window;
int GasPin = 7;
int Gas = LOW;
void setup() {
   window.attach(9);
  pinMode(GasPin,INPUT);
   window.write(0);
}
void loop() {
  Gas = digitalRead(GasPin);
    if(Gas==HIGH)
  {
     Serial.println("FLAME");
      window.write(90);
      delay(3000);
  }
else
{
  window.write(0);
    Serial.println("Normal");
}
  }
