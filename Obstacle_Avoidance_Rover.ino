const int TrigPin = 11;
const int EchoPin = 10;
const int mot1 = 9;
const int mot2 = 8;
const int mot3 = 4;
const int mot4 = 3;
long period, interval;

void setup() 
{
pinMode(TrigPin,OUTPUT);
pinMode(EchoPin,INPUT);
pinMode (mot1,OUTPUT);
pinMode (mot2,OUTPUT);
pinMode (mot3,OUTPUT);
pinMode (mot4,OUTPUT);
}

void loop()
{     
digitalWrite(TrigPin,LOW);
delayMicroseconds(2);
digitalWrite(TrigPin,HIGH);
delayMicroseconds(10);
digitalWrite(TrigPin,LOW);  
period = pulseIn(EchoPin,HIGH);
interval = period/58.2;
if(interval<20)
{
digitalWrite(mot1,LOW); 
digitalWrite(mot2,HIGH); 
digitalWrite(mot3,HIGH); 
digitalWrite(mot4,LOW);
}
else
{
digitalWrite(mot1,HIGH); 
digitalWrite(mot2,LOW); 
digitalWrite(mot3,HIGH); 
digitalWrite(mot4,LOW);
}  
delay(100);
}
