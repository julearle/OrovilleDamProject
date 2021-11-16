
/*
  SparkFun Inventor’s Kit
  Circuit 3B-Distance Sensor

  Control the color of an RGB LED using an ultrasonic distance sensor.

  This sketch was written by SparkFun Electronics, with lots of help from the Arduino community.
  This code is completely free for any use.

  View circuit diagram and instructions at: https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v41
  Download drawings and code at: https://github.com/sparkfun/SIK-Guide-Code
*/
#include <Servo.h>          //include the servo library

int servoPosition;         //the servo will move to this position

Servo myservo;              //create a servo object

const int servoPin = 5; //pin to control servo

const int redPin = 2;             //pin to control the red LED inside the RGB LED
const int greenPin = 3;           //pin to control the green LED inside the RGB LED
const int bluePin = 4;            //pin to control the blue LED inside the RGB LED

const int redLED = 6; //pin for only yellow led
const int redButton = 7;
const int yellowLED = 8; //pin for only yellow led
const int yellowButton = 9;
const int greenLED = 10; //pin for only yellow led
const int greenButton = 11;
const int blueLED = 12; //pin for only yellow led
const int blueButton = 13;

int incomingByte = 0; // for incoming serial data


void setup()
{
  Serial.begin (9600);        //set up a serial connection with the computer

  myservo.attach(servoPin);        //tell the servo object that its servo is plugged into pin 5

  pinMode(A0, INPUT_PULLUP); //set the switch pin to pullup resistor for servo control
  myservo.write(20); //set the servo to default position
  
  //set the RGB LED pins to output
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(redLED, OUTPUT);
  pinMode(redButton, INPUT_PULLUP);
  pinMode(yellowLED, OUTPUT);
  pinMode(yellowButton, INPUT_PULLUP);
  pinMode(greenLED, OUTPUT);
  pinMode(greenButton, INPUT_PULLUP);
  pinMode(blueLED, OUTPUT);
  pinMode(blueButton, INPUT_PULLUP);
}

void loop() {
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();

//    // say what you got:
//    Serial.print("I received: ");
//    Serial.println(incomingByte, DEC);
  }
  RGBLEDLogic(incomingByte);
  ButtonLogic();
  ServoLogic();
}


void setRGBLed(int red, int green, int blue){
  //make the RGB LED red
    analogWrite(redPin, red);
    analogWrite(greenPin, green);
    analogWrite(bluePin, blue);
}

void RGBLEDLogic (int incomingByte){
  if (incomingByte == 49){
      setRGBLed(255,0,0); //red
  }
  else if (incomingByte == 50){
      setRGBLed(0,255,217); //orange
  }
  else if (incomingByte == 51){
      setRGBLed(255,255,0); //yellow
  }
  else if (incomingByte == 52){
      setRGBLed(0,255,0); //green
  }
  else if (incomingByte == 53){
      setRGBLed(255,0,255); //purple
  }
  else if (incomingByte == 54){
      setRGBLed(0,0,0); //off
  }
}

void ButtonLogic(){
  if (digitalRead(redButton) == LOW){
    analogWrite(redLED, 255);
    Serial.println(1); //send a 1 for red
  }
  else if (digitalRead(yellowButton) == LOW){
    analogWrite(yellowLED, 255);
    Serial.println(2); //send a 2 for yellow
  }
  else if (digitalRead(greenButton) == LOW){
    analogWrite(greenLED, 255);
    Serial.println(3); //send a 3 for green
  }
  else if (digitalRead(blueButton) == LOW){
    analogWrite(blueLED, 255);
    Serial.println(4); //send a 4 for blue
  }
  else {
    analogWrite(redLED, 0);
    analogWrite(yellowLED, 0);
    analogWrite(greenLED, 0);
    analogWrite(blueLED, 0);
  }
}

void ServoLogic(){
  if(digitalRead(A0) == LOW){
     myservo.write(110);                      //move the servo to the open position
  }
  else {
    myservo.write(20);
  }
}
