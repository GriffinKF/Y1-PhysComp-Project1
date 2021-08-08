
int input_pin = 13; //Motion detector input
int pinA = 2; //TOP
int pinB = 3; //TOP RIGHT
int pinC = 4; //BOTTOM RIGHT
int pinD = 5; //BOTTOM
int pinE = 6; //BOTTOM LEFT
int pinF = 7; //TOP LEFT
int pinG = 8; //MIDDLE
int D4 = 12; //FAR RIGHT

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
    digitalWrite(D4, LOW); 
    //
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinG, HIGH);   
    delay(1000);

    digitalWrite(D4, LOW); 
    //
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, HIGH);   
    digitalWrite(pinE, HIGH);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinG, HIGH);   
    delay(1000);

    digitalWrite(D4, LOW); 
    //
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, LOW);   
    digitalWrite(pinG, LOW);   
    delay(1000);

    digitalWrite(D4, LOW); 
    //
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, LOW);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, HIGH);   
    digitalWrite(pinE, HIGH);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinG, HIGH);   
    delay(1000);

    digitalWrite(D4, LOW); 
    //
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, LOW);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, HIGH);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinG, HIGH);   
    delay(1000);

    digitalWrite(D4, LOW); 
    //
    digitalWrite(pinA, LOW);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinG, HIGH);   
    delay(1000);

    digitalWrite(D4, LOW); 
    //
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, HIGH);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, LOW);   
    digitalWrite(pinG, HIGH);   
    delay(1000);

    digitalWrite(D4, LOW); 
    //
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, LOW);   
    digitalWrite(pinD, HIGH);   
    digitalWrite(pinE, HIGH);   
    digitalWrite(pinF, LOW);   
    digitalWrite(pinG, HIGH);   
    delay(1000);

    digitalWrite(D4, LOW); 
    //
    digitalWrite(pinA, LOW);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, LOW);   
    digitalWrite(pinG, LOW);   
    delay(1000);
  } else {
    Serial.println("No Movement");
    
    digitalWrite(D4, LOW); 
    //
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
