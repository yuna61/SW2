#define PIN_LED 7


void setup() {
  pinMode(PIN_LED, OUTPUT);

}

void loop() {
  digitalWrite(PIN_LED, 0); //update LRD status.
  delay(1000); //wait for 1000 millisecinds

  for (int i =0; i<5; i++){
    digitalWrite(PIN_LED,1);
    delay(100);
    digitalWrite(PIN_LED,0);
    delay(100);
  }

  digitalWrite(PIN_LED,1);
  delay(1000);
  while(1){
    digitalWrite(PIN_LED, 1);
  }
}
