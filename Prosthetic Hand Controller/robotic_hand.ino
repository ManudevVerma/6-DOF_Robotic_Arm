#include <Servo.h>

Servo myservo1;  // create servo object to control a servo
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;

int potpin1 = 1;  
int val1;    
int potpin2 = 2;  
int val2;    
int potpin3 = 3;  
int val3;    
int potpin4 = 4;  
int val4;    
int potpin5 = 5;  
int val5;    

void setup() {
  myservo1.attach(3);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(5);
  myservo3.attach(6);
  myservo4.attach(9);
  myservo5.attach(10);
}

void loop() {
  val1 = analogRead(potpin1);            // reads the value of the potentiometer (value between 0 and 1023)
  val1 = map(val1, 430, 520, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo1.write(val1);                  // sets the servo position according to the scaled value
  delay(10);                           // waits for the servo to get there
  
  val2 = analogRead(potpin2);            // reads the value of the potentiometer (value between 0 and 1023)
  val2 = map(val2, 330, 530, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo2.write(val2);                  // sets the servo position according to the scaled value
  delay(10);                             // waits for the servo to get there
  
  val3 = analogRead(potpin3);            // reads the value of the potentiometer (value between 0 and 1023)
  val3 = map(val3, 250, 450, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo3.write(val3);                  // sets the servo position according to the scaled value
  delay(10);                           // waits for the servo to get there
  
  val4 = analogRead(potpin4);            // reads the value of the potentiometer (value between 0 and 1023)
  val4 = map(val4, 400, 540, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo4.write(val4);                  // sets the servo position according to the scaled value
  delay(10);                           // waits for the servo to get there
  
  val5 = analogRead(potpin5);            // reads the value of the potentiometer (value between 0 and 1023)
  val5 = map(val5, 320, 480, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo5.write(val5);                  // sets the servo position according to the scaled value
  delay(10);                           // waits for the servo to get there
}
