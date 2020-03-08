const int button = 30;
const int led = 32;
const int buzzer = 40;

const int DS = 22;
const int SH_CP = 24;
const int ST_CP = 26;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button) == LOW) {
    digitalWrite(led, LOW);
    noTone(buzzer);
    Serial.println("LED low -----");
  }
  else if (digitalRead(button) == HIGH) {
    digitalWrite(led, HIGH);
   
    tone(buzzer, 262);
    Serial.println("LED HIGH ++++");
  }
}
