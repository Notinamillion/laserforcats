/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>

Servo myservox;  // create servo object to control a servo
//Servo myservoy;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  //myservoy.attach(9);  // attaches the servo on pin 9 to the servo object
  myservox.attach(10);  // attaches the servo on pin 9 to the servo object
}

void loop() {

  for (pos = 0; pos <= random(110,120); pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservox.write(pos);              // tell servo to go to position in variable 'pos'
    //myservoy.write(pos);  
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= random(90,80); pos -= -1) { // goes from 180 degrees to 0 degrees
    myservox.write(pos);              // tell servo to go to position in variable 'pos'
    //myservoy.write(pos); 
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
