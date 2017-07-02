#include <Servo.h>

Servo myservo;

int pos = 0 ;
int final = 0;
int final2 = 0;
int time = 0;

void setup()
{
  myservo.attach(9);
}


void loop()
{
  final = random(160, 165);
  final2 = random(10, 30);
  for (pos = 90; pos < final; pos += 1)
  {
    myservo.write(pos);
    delay(final / 15);
  }
  delay(final / 2);
  for (pos = final; pos >= 90; pos -= 1)
  {
    myservo.write(pos);
    delay(final / 30);
  }

  for (pos = 90; pos >= final2; pos -= 1)
  {
    myservo.write(pos);
    delay(final / 15);
  }
  delay(final / 2);
  for (pos = final2; pos < 90; pos += 1)
  {
    myservo.write(pos);
    delay(final / 30);
  }
}
