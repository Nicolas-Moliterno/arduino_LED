#define LED 7
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED as an output.
  pinMode(LED , OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED , HIGH);           //turn the LED On by making the voltage HIGH
  delay(1000);                        // wait a second
  digitalWrite(LED , LOW);            // turn the LED Off by making the voltage LOW
  delay(1000);                        // wait a second
}