//author : Paavan Parekh
//Project title : Gas detecting system
//Problem Statement : The MQ-2 Gas Sensor module is useful for gas leakage detecting in home and industry.
/*
  Components used :
      
    1 --> Arduino uno
    2 --> Gas sensor(MQ 2)
    3 --> Red led
    4 --> Buzzer
    5 --> Jumper wires
*/ 

int  buzzer=8;
void setup() 
{ 
  pinMode(buzzer,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);

}

void loop()
{
  int i=analogRead(A0);
  Serial.println(i);
  delay(1000);
  if(i>=350)
  {
    digitalWrite(13,HIGH);
    delay(1000);
    tone(buzzer, 1000); 
    delay(100); 
  }
  else
  {
    digitalWrite(13,LOW);
    delay(1000);
    noTone(buzzer);     // Stop sound...
    delay(1000); 
  }

}
