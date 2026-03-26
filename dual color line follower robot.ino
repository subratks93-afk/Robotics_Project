// Motor driver pins
#define LM1 5   // Left motor forward
#define LM2 6   // Left motor backward
#define RM1 9   // Right motor forward
#define RM2 10  // Right motor backward

// IR sensor pins
#define LS 2    // Left IR sensor
#define RS 3    // Right IR sensor

void setup() {
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  pinMode(LS, INPUT);
  pinMode(RS, INPUT);
}

void loop() {
  int left = digitalRead(LS);
  int right = digitalRead(RS);

  // Active HIGH IR logic
  if (left == 0 && right == 0) {
    forward();       // Both on white → safe path → move forward
  }
  else if (left == 1 && right == 0) {
    left_turn();    // Left on black → turn right
  }
  else if (left == 0 && right == 1) {
    right_turn();     // Right on black → turn left
  }
  else if (left == 1 && right == 1) {
    backward();      // Both on black → move backward or stop
    delay(300);
    stop_robot();
  }
}

// === Motor Control Functions ===

void forward() {
  digitalWrite(LM1, HIGH);
  digitalWrite(LM2, LOW);
  digitalWrite(RM1, HIGH);
  digitalWrite(RM2, LOW);
}

void backward() {
  digitalWrite(LM1, LOW);
  digitalWrite(LM2, HIGH);
  digitalWrite(RM1, LOW);
  digitalWrite(RM2, HIGH);
}

void right_turn() {
  digitalWrite(LM1, HIGH);
  digitalWrite(LM2, LOW);
  digitalWrite(RM1, LOW);
  digitalWrite(RM2, LOW);
}

void left_turn() {
  digitalWrite(LM1, LOW);
  digitalWrite(LM2, LOW);
  digitalWrite(RM1, HIGH);
  digitalWrite(RM2, LOW);
}

void stop_robot() {
  digitalWrite(LM1, LOW);
  digitalWrite(LM2, LOW);
  digitalWrite(RM1, LOW);
  digitalWrite(RM2, LOW);
}
