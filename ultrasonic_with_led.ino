#include<Servo.h>
#include<NewPing.h>

const int TriggerPin = A3;
const int EchoPin = A2;
const int ServoPin = 10;

NewPing sonar (TriggerPin, EchoPin, 100);
Servo servo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.attach(ServoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  int cm = sonar.ping_cm();
  Serial.println(cm);

  int angle = map(cm, 2, 15, 15, 100);
  servo.write(angle);

  delay(50);

  if(cm < 35){
    digitalWrite(2, HIGH);
  }else if(cm < 70){
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, LOW);    
    digitalWrite(4, HIGH);
  }
}
