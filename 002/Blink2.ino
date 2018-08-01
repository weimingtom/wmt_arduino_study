void setup() {
  for (int i = 13; i >= 6; i--) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int i = 13; i >= 6; i--) {
    for (int j = 13; j >= 6; j--) {
      digitalWrite(j, HIGH); 
    }
    //delay(1000);  
    digitalWrite(i, LOW); 
    delay(1000);
  }
  /*
  for (int i = 13; i >= 6; i--) {
    digitalWrite(i, HIGH); 
  }
  delay(1000);  
  for (int i = 13; i >= 6; i--) {
    digitalWrite(i, LOW); 
  }
  delay(1000);
  */
}

