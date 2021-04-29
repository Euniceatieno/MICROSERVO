#include <Servo.h>
Servo servo1;
int Red=1;
int Blue=2;
int Green=3;

int pinpot=A1;
int val1;


void setup()
{
 servo1.attach(4);
 pinMode(Red, OUTPUT);
 pinMode(Blue, OUTPUT);
 pinMode(Green, OUTPUT);
 Serial.begin(9600);
 
}
 
void loop() {
servo1.write(0);
val1=analogRead(A3);
val1=map( val1, 60,1023,0,180);
if (val1<=60){
servo1.write(val1);
digitalWrite(Red, HIGH);
digitalWrite(Blue, LOW);
digitalWrite(Green, LOW);

  }
 else if (val1 <=120 && val1 >=60 ){
servo1.write(val1);
digitalWrite(Blue, HIGH);
digitalWrite(Red, LOW);
digitalWrite(Green, LOW);

  }
else (val1<=180 && val1 >=120);{
servo1.write(val1);
digitalWrite(Green, HIGH);
digitalWrite(Blue, LOW);
  digitalWrite(Red, LOW);
}
}




/*APPLICATIONS

1.Printers: move paper along to print multiple rows of text or graphics in exact lines on a paper
2.Automatic Door Openers: Supermarkets and hospital entrances are some major examples of automated door openers controlled by servo motors.
3.Robotics: A servo motor at every "joint" of a robot is used to actuate movements, giving the robot arm its precise angle.
*/


