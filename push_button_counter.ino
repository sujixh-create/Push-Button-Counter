int buttonPin = 2;
int counter = 0;
int lastState = HIGH;
int currentState;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  currentState = digitalRead(buttonPin);

  if (currentState == LOW && lastState == HIGH) {
    counter++;
    Serial.print("Count = ");
    Serial.println(counter);
    delay(200);
  }

  lastState = currentState;
}
