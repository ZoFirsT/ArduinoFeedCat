#include <Servo.h>

Servo myservo; 
int pos = 0;

void setup() {
  myservo.attach(9);
}

void loop() {
  // get the current time
  unsigned long currentMillis = millis();
  unsigned long currentSeconds = currentMillis / 1000;
  unsigned long currentMinutes = currentSeconds / 60;
  unsigned long currentHours = currentMinutes / 60;

  if (currentHours >= 7 && currentHours % 6 == 1) {
    // turn on the servo
    myservo.write(90);
    delay(1000);
    myservo.write(0);
  }
}
