const int LED0 = 2;
const int LED1 = 3;
const int LED2 = 4;
const int LED3 = 5;

// Delay between LEDs switching on/off
const int HALF_SECOND = 500;

// Initialize LED0-LED3 as output
void setup() {
  for(int led = LED0; led <= LED3; ++led) {
    pinMode(led, OUTPUT);
  } 
}

// Alternate which LED is lit up
void loop(){
  for(int led = LED0; led <= LED3; ++led) {
    digitalWrite(led, HIGH);
    delay(HALF_SECOND);
    digitalWrite(led, LOW);
    delay(HALF_SECOND);
  } 
}
