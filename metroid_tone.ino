const int buzzerPin = 9; // Connect buzzer to pin 9
unsigned int frequencies[] = {587, 698, 587, 523, 440};
unsigned int beat = 800;
unsigned int durations[] = {beat, beat, beat, beat, beat*4};

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i++) {
    tone(buzzerPin, frequencies[i], durations[i]);
    delay(durations[i]);
    noTone(buzzerPin);
  }
  delay(5000); // Pause between cycles
}
