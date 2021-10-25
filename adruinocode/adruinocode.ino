
/*
  SparkFun Inventor’s Kit
  Circuit 3B-Distance Sensor

  Control the color of an RGB LED using an ultrasonic distance sensor.

  This sketch was written by SparkFun Electronics, with lots of help from the Arduino community.
  This code is completely free for any use.

  View circuit diagram and instructions at: https://learn.sparkfun.com/tutorials/sparkfun-inventors-kit-experiment-guide---v41
  Download drawings and code at: https://github.com/sparkfun/SIK-Guide-Code
*/
const int redPin = 2;             //pin to control the red LED inside the RGB LED
const int greenPin = 3;           //pin to control the green LED inside the RGB LED
const int bluePin = 4;            //pin to control the blue LED inside the RGB LED

int incomingByte = 0; // for incoming serial data

void setup()
{
  Serial.begin (9600);        //set up a serial connection with the computer
  
  //set the RGB LED pins to output
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();

    // say what you got:
    Serial.print("I received: ");
    Serial.println(incomingByte, DEC);
  }
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
      setRGBLed(255,0,255); //blue
  }
}


void setRGBLed(int red, int green, int blue){
  //make the RGB LED red
    analogWrite(redPin, red);
    analogWrite(greenPin, green);
    analogWrite(bluePin, blue);
}
