
#define BLUE_PIN 9
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(BLUE_PIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for(int val = 0; val < 255; val ++){
    analogWrite(BLUE_PIN, val);
    delay(30);  
  }
  delay(2000);
    for(int val = 255; val >= 0; val -= 1){
    analogWrite(BLUE_PIN, val);
    delay(30);  
  }
  delay(2000);
  }
