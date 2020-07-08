#include <Servo.h>
Servo moto;
int trig=13, echo=11 ; // pin of ultrasonic
int x=0;// x is duration of the pulse
int D=0;// distance
void setup()
{ 
  moto.attach(3);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
 Serial.begin(9600);
}

void loop()
{
  digitalWrite(trig,LOW);
   delayMicroseconds(1);
  
   digitalWrite(trig,HIGH);
  delayMicroseconds(20); 
  digitalWrite(trig,LOW);
  
  x=(echo,HIGH);
  D=x*0.038/2;
  Serial.print("distance");
  Serial.println(D);
  if(D<400 && D>300){moto.write(120);
 }// small carton
  else if (D<299 && D>100){moto.write(90);
}// midium carton
  else if (D<99 && D>0){moto.write(60);
 }// big carton
  
   
}
