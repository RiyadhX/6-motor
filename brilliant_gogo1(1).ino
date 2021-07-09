// C++ code
//
#include <Servo.h>

int position = 0;

int i = 0;

int j = 0;

int k = 0;

int m = 0;

int n = 0;

int o = 0;

int p = 0;

int q = 0;

int r = 0;

Servo servo_9;

Servo servo_8;

void setup()
{
  servo_9.attach(9, 500, 2500);

  servo_8.attach(8, 500, 2500);

}

void loop()
{
  position = 90;
  for (position = 90; position <= 180; position += 1) {
    servo_9.write(position);
    servo_8.write(position);
    delay(79); // Wait for 79 millisecond(s)
  }
  for (position = 180; position >= 90; position -= 1) {
    servo_9.write(position);
    servo_8.write(position);
  }
  position = 90;
  for (position = 90; position <= 150; position += 1) {
    servo_9.write(position);
    servo_8.write(position);
    delay(79); // Wait for 79 millisecond(s)
  }
  for (position = 150; position >= 90; position -= 1) {
    servo_9.write(position);
    servo_8.write(position);
    delay(79); // Wait for 79 millisecond(s)
  }
  position = 90;
  for (position = 90; position <= 160; position += 1) {
    servo_9.write(position);
    delay(79); // Wait for 79 millisecond(s)
  }
  for (position = 90; position <= 200; position += 1) {
    servo_8.write(position);
    delay(79); // Wait for 79 millisecond(s)
  }
}