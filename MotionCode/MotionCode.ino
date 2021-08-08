
int input_pin = 13; //Motion detector input
int pinA = 2; //TOP
int pinB = 3; //TOP RIGHT
int pinC = 4; //BOTTOM RIGHT
int pinD = 5; //BOTTOM
int pinE = 6; //BOTTOM LEFT
int pinF = 7; //TOP LEFT
int pinG = 8; //MIDDLE
int D4 = 12; //FAR RIGHT
int redLED = 11;
int greenLED = 10;

#include <Servo.h>
Servo myservo;  // create servo object to control a servo

int pos = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(input_pin, INPUT);
  Serial.begin(9600);
  // initialize the digital pins as outputs.
  pinMode(pinA, OUTPUT);     
  pinMode(pinB, OUTPUT);     
  pinMode(pinC, OUTPUT);     
  pinMode(pinD, OUTPUT);     
  pinMode(pinE, OUTPUT);     
  pinMode(pinF, OUTPUT);     
  pinMode(pinG, OUTPUT);    
  pinMode(D4, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo.write(180); // Turn the Servo too base position.
  delay(2000);
  
  //Turn off everything
  digitalWrite(D4, HIGH); 
  //
  digitalWrite(pinA, LOW);   
  digitalWrite(pinB, LOW);   
  digitalWrite(pinC, LOW);   
  digitalWrite(pinD, LOW);   
  digitalWrite(pinE, LOW);   
  digitalWrite(pinF, LOW);   
  digitalWrite(pinG, LOW);  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(input_pin) == HIGH){
    Serial.println("Detected");
    for (pos = 180; pos >= 110; pos -= 1) { // goes from 0 degrees to 110 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(20);  // waits 20ms for the servo to reach the position
    }
    
    digitalWrite(greenLED, HIGH);
    digitalWrite(redLED, LOW);
    
    digitalWrite(D4, LOW); 
    // Number 9
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinG, HIGH);   
    delay(1000);

    digitalWrite(D4, LOW); 
    // Number 8
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, HIGH);   
    digitalWrite(pinE, HIGH);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinG, HIGH);   
    delay(1000);

    digitalWrite(D4, LOW); 
    // Number 7
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, LOW);   
    digitalWrite(pinG, LOW);   
    delay(1000);

    digitalWrite(D4, LOW); 
    // Number 6
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, LOW);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, HIGH);   
    digitalWrite(pinE, HIGH);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinG, HIGH);   
    delay(1000);

    digitalWrite(D4, LOW); 
    // Number 5
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, LOW);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, HIGH);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinG, HIGH);   
    delay(1000);

    digitalWrite(D4, LOW); 
    // Number 4
    digitalWrite(pinA, LOW);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinG, HIGH);   
    delay(1000);

    digitalWrite(D4, LOW); 
    // Number 3
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, HIGH);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, LOW);   
    digitalWrite(pinG, HIGH);   
    delay(1000);

    digitalWrite(D4, LOW); 
    // Number 2
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, LOW);   
    digitalWrite(pinD, HIGH);   
    digitalWrite(pinE, HIGH);   
    digitalWrite(pinF, LOW);   
    digitalWrite(pinG, HIGH);   
    delay(1000);

    digitalWrite(D4, LOW); 
    // Number 1
    digitalWrite(pinA, LOW);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, LOW);   
    digitalWrite(pinG, LOW);   
    delay(1000);

    digitalWrite(D4, LOW); 
    // Number 0
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, HIGH);   
    digitalWrite(pinE, HIGH);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinG, LOW);   
    delay(1000);

    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, HIGH);

    for (pos = 110; pos <= 180; pos += 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(20);                       // waits 20ms for the servo to reach the position
    }
    
  } else {
    Serial.println("No Movement");

    digitalWrite(greenLED, LOW);
    digitalWrite(redLED, HIGH);
    
    digitalWrite(D4, LOW); 
    // Number 9
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinG, HIGH);   
    delay(1000);
  } 
}
