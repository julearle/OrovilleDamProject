/*
  SparkFun Inventor’s Kit
  Circuit 3A-Servo

  Move a servo attached to pin 9 so that it's angle matches a potentiometer attached to A0.

  This sketch was written by SparkFun Electronics, with lots of help from the Arduino community.
  This code is completely free for any use.

  View circuit diagram and instructions at: https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v41
  Download drawings and code at: https://github.com/sparkfun/SIK-Guide-Code
*/

#include <Servo.h>          //include the servo library

int servoPosition;         //the servo will move to this position

int buttonPin = 4; //pin for button

Servo myservo;              //create a servo object

void setup() {

  myservo.attach(3);        //tell the servo object that its servo is plugged into pin 9

  pinMode(buttonPin, INPUT_PULLUP);
  myservo.write(20);
  
}

void loop() {
  if(digitalRead(buttonPin) == LOW){
     myservo.write(110);                      //move the servo to the open position
  }
  else {
    myservo.write(20);
  }
}
