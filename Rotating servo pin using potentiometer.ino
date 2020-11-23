#include <Servo.h>

int i = 0;

int j = 0;

int outputValue = 0;

int SensorValue = 0;

Servo servo_9;

void setup()
{
  pinMode(A0, INPUT);
  servo_9.attach(9);

}

void loop()
{
  SensorValue = analogRead(A0);
  outputValue = map(SensorValue, 0, 1023, 0, 180);
  servo_9.write(outputValue);
  delay(10); // Delay a little bit to improve simulation performance
}