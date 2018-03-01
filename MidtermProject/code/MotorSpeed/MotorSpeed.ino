/*
 *Motors Test and Calibration
 * 
 * quick Test for Ultradar Bot drive motors
 * Written by Sudhu Tewari, 2018
 * 
 */


int leftMotor = 5;
int rightMotor = 6;

void setup() {
  Serial.begin(9600);
  pinMode(leftMotor,OUTPUT);
  pinMode(rightMotor,OUTPUT);
}

void loop() {
  Serial.println(leftMotor);
  analogWrite(leftMotor, 245);
  //analogWrite(leftMotor, 127);
  analogWrite(rightMotor, 127);
  delay(2000);
  analogWrite(rightMotor, 0);
  analogWrite(leftMotor, 0);
  delay(2000);
}
