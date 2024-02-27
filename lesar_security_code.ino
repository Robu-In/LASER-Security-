void setup() {
  // put your setup code here, to run once:
pinMode(4,OUTPUT); //Buzzer Pin and LED 
pinMode(7,INPUT); // Light Sensor
delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
int i=0;
if(digitalRead(7)==HIGH)
{
  a:
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(4,LOW);
  delay(100);
  i++;
  if(i<50){
  goto a;
  }
  
  
  }

}
