void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);  
  pinMode(13,OUTPUT);

 
}

//picking code to be added


void forward()
{
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
}



void right()
{
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
}

void left()
{
  
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
}

void stop1()
{
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()==0);
  int n= Serial.parseInt();
  {
  Serial.parseInt();
  switch(n)
  {
    case '0':
    forward();
    break;
    break;
    case '1':
    left();
    break;
    case '2':
    right();
    break;
    case '3':
    stop1();
    break;
  }
 
  }

}    
