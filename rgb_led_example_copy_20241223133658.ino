// Define pinout
const int led_r = 2;
const int led_g = 3;
const int led_b = 4;

void setup() {
  // put your setup code here, to run once:
  //Collect serial data...
  Serial.begin(9600);
  Serial.println("Communication started! Hello computer...");

  //Configure pinout
  pinMode(led_r, OUTPUT);
  pinMode(led_g, OUTPUT);
  pinMode(led_b, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()){
    char key = Serial.read();

    //RED
    if (key == 'r'){
      reset_pinout();
      Serial.println("LED changed to RED.");
      digitalWrite(led_r, HIGH);
    } //GREEN
    else if (key == 'g'){
      reset_pinout();
      Serial.println("LED changed to GREEN.");
      digitalWrite(led_g, HIGH);
    } //BLUE
    else if(key == 'b'){
      reset_pinout();
      Serial.println("LED changed to BLUE.");
      digitalWrite(led_b, HIGH);
    }
  }
}

void reset_pinout() {
  digitalWrite(led_r, LOW);
  digitalWrite(led_g, LOW);
  digitalWrite(led_b, LOW);
}
