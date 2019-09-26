

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //둘다 9600인것 9600bit/s
  Serial.println("Hello World.");
}

void loop() {
  // put your main code here, to run repeatedly:
  char read_data;
  //tx = transmit : 송신
  //rx = receive : 수신
  if(Serial.available())
  {
    read_data = Serial.read();
    Serial.print(read_data);
  }
  delay(10); //너무 빨리 돌 필요가 없기 때문에 딜레이를 줌
}
