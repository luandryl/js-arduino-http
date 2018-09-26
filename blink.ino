
int led = 11;
int ledState = 12;
void setup() {
  
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(ledState, INPUT);

}

void loop() {
 
  digitalWrite(led, HIGH);
  delay(1000);
  
  int state = digitalRead(ledState);
  Serial.println(state);
  delay(1);
  
  digitalWrite(led, LOW);
  delay(1000);

}
