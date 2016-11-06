int buttonPins[] = {2, 3, 4, 5, 6};
int buttonStates[] = {0, 0, 0, 0, 0};
int lastButtonState[] = {0, 0, 0, 0, 0};

const int ledPin =  13;

void setup() {
  pinMode(ledPin, OUTPUT);
  for (int x = 0; x < 5; x++) {
    pinMode(buttonPins[x], INPUT);
  }
  Serial.begin(31250);  //  Set MIDI baud rate:
}

void noteOn(int cmd, int pitch, int velocity) {
  Serial.write(cmd);
  Serial.write(pitch);
  Serial.write(velocity);
}

void loop() {
  for (int i = 0; i < 5; i++) {
    buttonStates[i] = digitalRead(buttonPins[i]);
    if (buttonStates[i] != lastButtonState[i]) {
      if (buttonStates[i] == HIGH && buttonPins[i] == 6) {
        noteOn(0x90, 0x43, 0x7F);
        digitalWrite(ledPin, HIGH);
      }
      else if (buttonStates[i] == HIGH && buttonPins[i] == 5) {
        noteOn(0x90, 0x41, 0x7F);
        digitalWrite(ledPin, HIGH);
      }
      else if (buttonStates[i] == HIGH && buttonPins[i] == 4) {
        noteOn(0x90, 0x40, 0x7F);
        digitalWrite(ledPin, HIGH);
      }
      else if (buttonStates[i] == HIGH && buttonPins[i] == 3) {
        noteOn(0x90, 0x3E, 0x7F);
        digitalWrite(ledPin, HIGH);
      }
      else if (buttonStates[i] == HIGH && buttonPins[i] == 2) {
        noteOn(0x90, 0x3C, 0x7F);
        digitalWrite(ledPin, HIGH);
      }
      else {
        if (buttonStates[i] == LOW && buttonPins[i] == 6) {
          noteOn(0x90, 0x43, 0x00);
        }
        else if (buttonStates[i] == LOW && buttonPins[i] == 5) {
          noteOn(0x90, 0x41, 0x00);
        }
        else if (buttonStates[i] == LOW && buttonPins[i] == 4) {
          noteOn(0x90, 0x40, 0x00);
        }
        else if (buttonStates[i] == LOW && buttonPins[i] == 3) {
          noteOn(0x90, 0x3E, 0x00);
        }
        else if (buttonStates[i] == LOW && buttonPins[i] == 2) {
          noteOn(0x90, 0x3C, 0x00);
        }
        digitalWrite(ledPin, LOW);
      }
      delay(50);
    }
    lastButtonState[i] = buttonStates[i];
  }
}
