#include <TaskManagerIO.h>

#define NUMBER_OF_PINS 6

int* ledStates = new int[NUMBER_OF_PINS];
  int pins[NUMBER_OF_PINS] = {3, 5, 6, 9, 10, 11};
  unsigned long* intervalsArr = new unsigned long[NUMBER_OF_PINS];

void setup() {
  for (int i = 0; i < NUMBER_OF_PINS; ++i) {
    microArr[i] = 0;
    ledStates[i] = LOW;
    pinMode(pins[i], OUTPUT);
  }

  intervalsArr[0] = 160000;
  intervalsArr[1] = 50000;
  intervalsArr[2] = 800000;
  intervalsArr[3] = 400000;
  intervalsArr[4] = 200000;
  intervalsArr[5] = 100000;

  taskid_t taskId = taskManager.scheduleFixedRate(intervalsArr[0], [] {
    if (ledStates[0] == LOW) {
      ledStates[0] = HIGH;
    }
    else {
      ledStates[0] = LOW;
    }

    digitalWrite(pins[0], ledStates[0]);
  });

  taskid_t taskId = taskManager.scheduleFixedRate(intervalsArr[1], [] {
    if (ledStates[1] == LOW) {
      ledStates[1] = HIGH;
    }
    else {
      ledStates[1] = LOW;
    }

    digitalWrite(pins[1], ledStates[1]);
  });

  taskid_t taskId = taskManager.scheduleFixedRate(intervalsArr[2], [] {
    if (ledStates[2] == LOW) {
      ledStates[2] = HIGH;
    }
    else {
      ledStates[2] = LOW;
    }

    digitalWrite(pins[2], ledStates[2]);
  });

  taskid_t taskId = taskManager.scheduleFixedRate(intervalsArr[3], [] {
    if (ledStates[3] == LOW) {
      ledStates[3] = HIGH;
    }
    else {
      ledStates[3] = LOW;
    }

    digitalWrite(pins[3], ledStates[3]);
  });

  taskid_t taskId = taskManager.scheduleFixedRate(intervalsArr[4], [] {
    if (ledStates[4] == LOW) {
      ledStates[4] = HIGH;
    }
    else {
      ledStates[4] = LOW;
    }

    digitalWrite(pins[4], ledStates[4]);
  });

  taskid_t taskId = taskManager.scheduleFixedRate(intervalsArr[5], [] {
    if (ledStates[5] == LOW) {
      ledStates[5] = HIGH;
    }
    else {
      ledStates[5] = LOW;
    }

    digitalWrite(pins[5], ledStates[5]);
  });
}

void loop() {
  taskManager.runLoop();
}