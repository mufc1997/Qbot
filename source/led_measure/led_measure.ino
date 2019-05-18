#include "WMHead.h"
#include "WMBoard.h"

double distance;
WMRGBLed rgbLED(0,4);
WMUltrasonic Ultrasonic(9);
WMDCMotor motor1(8), motor2(7);
WMMatrixLed matrixLed(5);

void turn_left(int speed) {
  motor1.reverseRun(-speed);
  motor2.reverseRun(0);
}

void turn_right(int speed) {
  motor1.reverseRun(0);
  motor2.reverseRun(-speed);
}

void go(int speed) {
  motor1.reverseRun(speed);
  motor2.reverseRun(speed);
}

void back(int speed) {
  go(-speed);
}

void not_move() {
  go(0);
}

void setup() {
  randomSeed(A0);
  rgbLED.setColor(0,0);
  rgbLED.show();
  matrixLed.setColorIndex(1);
  matrixLed.setBrightness(6);
  Serial.begin(9600);
  Serial.println("Serial begin: ");
  delay(1000);
}

void loop() {
  distance = Ultrasonic.Distance();

  Serial.println(distance);
  
  matrixLed.showNum(0,distance);
  if (distance < 30) {
    if (distance < 15) {
      back(20);
    } else {
      go(20);
    }
  } else {
    turn_left(20);
  }
}
