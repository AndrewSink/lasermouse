/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 12 Dec 2019
 by Andrew Sink
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(14);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 0; pos <= 100; pos += 1) { // goes from 0 degrees to 100 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(25);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 60; pos >= 100; pos -= 1) { // goes from 100 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(25);                       // waits 15ms for the servo to reach the position
  }
}
