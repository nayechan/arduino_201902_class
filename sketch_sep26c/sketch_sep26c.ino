int led = 13;
int ms = 1000;

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
      ms = 1000;
    }
    else if(read_data == '2')
    {
      ms = 500;
    }
    else if(read_data == '3')
    {
      ms = 200;
    }
  }
  
  digitalWrite(led, HIGH);
  delay(ms);
  digitalWrite(led, LOW);
  delay(ms);
}
