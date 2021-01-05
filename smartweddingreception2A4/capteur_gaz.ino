int led_pin=13;
int analog_pin=A5;
char data;
void setup() {

Serial.begin(9600);
pinMode(analog_pin, INPUT);
pinMode(led_pin, OUTPUT);

}

void loop() {

int temp;
int count=0;
temp=analogRead(analog_pin);
if(data!='1')
{
if(temp>512)
{
  data='1';
  Serial.write(data);
  
}
}
if(Serial.available())
{  
data=Serial.read();

if(data=='0')
{
  while(count<3)
  {
digitalWrite(led_pin,HIGH);
delay(1000);
digitalWrite(led_pin,LOW);
delay(1000);
count++;
  }
  
  if(count == 3)
  {
    count=0;
  }
}

}

}
