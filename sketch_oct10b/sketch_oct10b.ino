int led = 9;
int brightness = 0;
int fadeAmount = 1;


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
  brightness += fadeAmount;
  if(brightness > 255)
  {
    brightness = 255;
    fadeAmount*=-1;
  }
  if(brightness < 0)
  {
    brightness = 0;
    fadeAmount*=-1;
  }
  customAnalogWrite(led, brightness);
  delay(1);
}
