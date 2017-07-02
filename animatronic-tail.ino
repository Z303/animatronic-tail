#include <Servo.h>

Servo tailservo;

int pos = 0 ;
int final = 0;
int final2 = 0;
int time = 0;

void setup()
{
  tailservo.attach(9);
}


void loop()
{
  final = random(160, 165);
  final2 = random(10, 30);
  for (pos = 90; pos < final; pos += 1)
  {
    tailservo.write(pos);
    delay(final / 15);
  }
  delay(final / 2);
  for (pos = final; pos >= 90; pos -= 1)
  {
    tailservo.write(pos);
    delay(final / 30);
  }

  for (pos = 90; pos >= final2; pos -= 1)
  {
    tailservo.write(pos);
    delay(final / 15);
  }
  delay(final / 2);
  for (pos = final2; pos < 90; pos += 1)
  {
    tailservo.write(pos);
    delay(final / 30);
  }
}

