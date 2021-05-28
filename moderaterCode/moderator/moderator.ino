const int ENB = 9;
const int IN1 = 7;
const int IN2 = 6;

void setup() {
  // put your setup code here, to run once:
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  analogWrite(ENB, 250);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
