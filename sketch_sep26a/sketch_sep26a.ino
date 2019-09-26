

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello World.");
}

void loop() {
  // put your main code here, to run repeatedly:
  char read_data;
  if(Serial.available())
  {
    read_data = Serial.read()+1;
    Serial.print(read_data);
  }
  delay(10);
}
