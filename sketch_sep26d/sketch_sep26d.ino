int led = 13;
int ms = 1000;
int mode = 0;

int prev=0;
int curr=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(7,INPUT);
  digitalWrite(led,LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  prev = curr;
  curr = digitalRead(7);
  if(curr==1 && prev==0)
  {
    mode++;
  }
  if(mode > 4) mode =0;

  switch(mode)
  {
    case 0:
    ms = 1000;
    break;
    case 1:
    ms = 500;
    break;
    case 2:
    ms = 300;
    break;
    case 3:
    ms = 100;
    break;
    case 4:
    ms = 25;
    break;      
  }
  
  digitalWrite(led, HIGH);
  delay(ms);
  digitalWrite(led, LOW);
  delay(ms);
}
