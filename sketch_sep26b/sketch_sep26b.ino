int led = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char read_data;
  if(Serial.available())
  {
    read_data = Serial.read();
    if(read_data == '1')
    {
      digitalWrite(led, HIGH);
      Serial.println("LED ON");
    }
    else if(read_data == '2')
    {
      digitalWrite(led, LOW);
      Serial.println("LED OFF");
    }
  }
  delay(10);
}
