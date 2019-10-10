int led = 9;
int rawValue = 0;
int calcValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void customAnalogWrite(int led, int amount)
{
  digitalWrite(led,HIGH);
  delayMicroseconds(amount);
  digitalWrite(led,LOW);
  delayMicroseconds(256-amount);
}

void loop() {
  // put your main code here, to run repeatedly:
  rawValue = analogRead(A0);
  calcValue = rawValue/4;
  
  customAnalogWrite(led, calcValue);
  delay(1);
}
