
const int leds[] = {8, 9, 10, 11, 12};
const int totalLeds = 5;
const int tempoEspera = 100; 

void setup() {
  
  for (int i = 0; i < totalLeds; i++) {
    pinMode(leds[i], OUTPUT);
  }
}
void loop() {

  for (int i = 0; i < totalLeds; i++) {
    digitalWrite(leds[i], HIGH);
    delay(tempoEspera);
    digitalWrite(leds[i], LOW);
  }

  for (int i = totalLeds - 2; i > 0; i--) {
    digitalWrite(leds[i], HIGH);
    delay(tempoEspera);
    digitalWrite(leds[i], LOW);
  }
}