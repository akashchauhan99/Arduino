/*

•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••
•                                                                                                                                                                   •                                                                           • 
•                                                                               (*^_^*)                                                                             •
•                                                                                                                                                                   •
•                                                                       [•] Game Controller [•]                                                                     •
•                                                                        ......................                                                                     •
•                                                                                                                                                                   •
•                                                                    Concept by: Akash Singh Chauhan                                                                •
•                                                                   __________________________________                                                              •
•                                                                                                                                                                   •
•                                                                                                                                                                   •
•••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••••

*/

#include <Keyboard.h>

// These are used as indices to other arrays
enum {
  UP,
  DOWN,
  RIGHT,
  LEFT,
  A,
  Z,
  X,
  S,
  SELECT,
  
  // Number of keys
  NUM_KEYS,
};

// Maps button index to digital pin
const int PINS[] = {
  2,  // UP
  3,  // RIGHT
  4,  // DOWN
  5,  // LEFT
  10, // A
  16, // Z
  14, // X
  15, // S
  9,  // SELECT
};

// Maps button to keyboard key
const char KEYS[] = {
  KEY_UP_ARROW,    // UP
  KEY_DOWN_ARROW, // RIGHT
  KEY_RIGHT_ARROW,  // DOWN
  KEY_LEFT_ARROW,  // LEFT
  'a',             // A
  'z',             // Z
  'x',             // X
  's',             // S
  KEY_RETURN,      // SELECT
};

// Store previous state of keys
bool STATES[NUM_KEYS];

// Initialize
void setup() {
  Keyboard.begin();
  for (int i = 0; i < NUM_KEYS; i++) {
    pinMode(PINS[i], INPUT_PULLUP);
    STATES[i] = digitalRead(PINS[i]);
  }
}

// Main loop
void loop() {
  bool state;
  // Process each key
  for (int i = 0; i < NUM_KEYS; i++) {
    state = digitalRead(PINS[i]);
    if (STATES[i] != state) {
      if (state == LOW) {
        Keyboard.press(KEYS[i]);
      } else {
        Keyboard.release(KEYS[i]);
      }
      STATES[i] = state;
    }
  }
}
