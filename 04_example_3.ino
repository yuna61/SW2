#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); //Initialize serial port
  while (!Serial) {
    ; //wait for serial port to connect.
  }
  Serial.println("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); //turn off LED.
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED, toggle); //update LRD status.
  delay(1000); //wait for 1000 millisecinds
}

int toggle_state(int toggle){
  if (toggle == 0) {
    toggle = 1;
  }
  else if (toggle == 1) {
    toggle = 0;
  }
  return toggle;
}
