
int input_pin = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(input_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(input_pin) == HIGH){
    Serial.println("Detected");
    delay(100);
  } else {
    Serial.println("No Movement");
    delay(100);
  }
  delay(100);
}
