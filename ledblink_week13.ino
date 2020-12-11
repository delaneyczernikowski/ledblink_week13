int ledPin = 13;
int ledPin2 = 14;
int switchPin = 15;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop() {
  if (digitalRead(switchPin) == HIGH) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  } else if (digitalRead(switchPin) == LOW) {
    digitalWrite(ledPin2, HIGH);
    delay(500);
    digitalWrite(ledPin2, LOW);
    delay(500);
  }
}
