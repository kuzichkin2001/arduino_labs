const int NUMBER_OF_PINS = 6;

unsigned long* microsArr = new unsigned long[NUMBER_OF_PINS];
unsigned long* intervalsArr = new unsigned long[NUMBER_OF_PINS];
int* ledStates = new int[NUMBER_OF_PINS];
int pins[NUMBER_OF_PINS] = {3, 5, 6, 9, 10, 11};

void setup() {
  for (int i = 0; i < NUMBER_OF_PINS; ++i) {
    microsArr[i] = 0;
    ledStates[i] = LOW;
    pinMode(pins[i], OUTPUT);
  }

  intervalsArr[0] = 160000;
  intervalsArr[1] = 50000;
  intervalsArr[2] = 800000;
  intervalsArr[3] = 400000;
  intervalsArr[4] = 200000;
  intervalsArr[5] = 100000;
}

void loop() {
  unsigned long micros_val = micros();

  if (micros_val - microsArr[0] >= intervalsArr[0]) {
    microsArr[0] = micros_val;

    if (ledStates[0] == LOW) {
      ledStates[0] = HIGH;
    }
    else {
      ledStates[0] = LOW;
    }

    digitalWrite(pins[0], ledStates[0]);
  }

  if (micros_val - microsArr[1] >= intervalsArr[1]) {
    microsArr[1] = micros_val;

    if (ledStates[1] == LOW) {
      ledStates[1] = HIGH;
    }
    else {
      ledStates[1] = LOW;
    }

    digitalWrite(pins[1], ledStates[1]);
  }
  
  if (micros_val - microsArr[2] >= intervalsArr[2]) {
    microsArr[2] = micros_val;

    if (ledStates[2] == LOW) {
      ledStates[2] = HIGH;
    }
    else {
      ledStates[2] = LOW;
    }

    digitalWrite(pins[2], ledStates[2]);
  }

  if (micros_val - microsArr[3] >= intervalsArr[3]) {
    microsArr[3] = micros_val;

    if (ledStates[3] == LOW) {
      ledStates[3] = HIGH;
    }
    else {
      ledStates[3] = LOW;
    }

    digitalWrite(pins[3], ledStates[3]);
  }

  if (micros_val - microsArr[4] >= intervalsArr[4]) {
    microsArr[4] = micros_val;

    if (ledStates[4] == LOW) {
      ledStates[4] = HIGH;
    }
    else {
      ledStates[4] = LOW;
    }

    digitalWrite(pins[4], ledStates[4]);
  }
}