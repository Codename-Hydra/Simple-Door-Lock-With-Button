#include <Servo.h>

int led_on = 0;
int led_off = 0;
Servo servo_9;

void setup()
{
  pinMode(7, INPUT);
  pinMode(3, INPUT);
  servo_9.attach(9, 500, 2500);
  pinMode(5, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  // Fixed variable names (removed spaces)
  int ledOn = digitalRead(7);
  int ledOff = digitalRead(3);
  
  if (ledOn == HIGH) {
    servo_9.write(90);
    digitalWrite(5, HIGH);
    digitalWrite(11, LOW);
  }
  
  if (ledOff == HIGH) {
    servo_9.write(0);
    digitalWrite(11, HIGH);
    digitalWrite(5, LOW);
  }
  
  delay(10); // Delay a little bit to improve simulation performance
}
