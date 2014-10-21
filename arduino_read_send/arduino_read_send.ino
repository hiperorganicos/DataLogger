void setup() {
  // comunicacao serial
  Serial.begin(9600);
}

void loop() {
  
  // primeiro sensor
  Serial.print(analogRead(A0));
  
  // espaco entre valores
  Serial.print(" ");
  
  // segundo sensor
  Serial.println(analogRead(A1));
  
  delay(280);
}
