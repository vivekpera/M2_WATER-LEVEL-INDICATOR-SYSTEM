const int out=2;
const int in=3;
const int red=10;
const int green=8;
const int buzz=12;

void setup(){
Serial.begin(9600);
pinMode(in, INPUT);
pinMode(out, OUTPUT);
pinMode(red, OUTPUT);
pinMode(green, OUTPUT);
pinMode(buzz, OUTPUT);
digitalWrite(green,LOW);
digitalWrite(red,LOW);
digitalWrite(buzz,LOW);
}

void loop()
{
long dur;
long dis;
long tocm;
digitalWrite(out,LOW);
delayMicroseconds(2);
digitalWrite(out,HIGH);
delayMicroseconds(10);
digitalWrite(out,LOW);
dur=pulseIn(in,HIGH);
tocm=microsecondsToCentimeters(dur);
Serial.println(String(tocm));
if(tocm<=6)
{
  digitalWrite(red,HIGH);
 digitalWrite(green,LOW);
  digitalWrite(buzz,HIGH);
  delay(5000);
  digitalWrite(buzz,LOW);
  delay(2000);
  digitalWrite(buzz,HIGH);
   delay(2000);
  digitalWrite(buzz,LOW);
 delay(2000);
  digitalWrite(buzz,HIGH);
   delay(2000);
  digitalWrite(buzz,LOW);
  delay(2000);
  digitalWrite(buzz,HIGH);
   delay(2000);
  digitalWrite(buzz,LOW);
  
}
else{
if(tocm>=20)
{
  digitalWrite(red,HIGH);
  digitalWrite(buzz,LOW);
  digitalWrite(green,LOW);
  digitalWrite(buzz,LOW);
}else
{
 digitalWrite(green,HIGH); 
 digitalWrite(red,LOW);
 digitalWrite(buzz,LOW);
}
}
delay(5000);
}

long microsecondsToCentimeters(long microseconds)
{
return microseconds / 29 / 2;
}
