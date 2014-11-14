int slnd[6];

int slndState = LOW;
unsigned long previousMillis = 0;
const long interval = 250;

void setup() {
  
  Serial.begin(9600); 

  for(int i = 0; i < 6; i++) {
    slnd[i] = i + 8;
    pinMode(slnd[i], OUTPUT);
    Serial.print(slnd[i]);
  }

}

void loop() {
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis >= interval) {
    
    previousMillis = currentMillis;   

    if (slndState == LOW)
      slndState = HIGH;
    else
      slndState = LOW;
    
    for(int i = 0; i < 6; i++) {
      digitalWrite(slnd[i], slndState);
    }
  }  
  
}
