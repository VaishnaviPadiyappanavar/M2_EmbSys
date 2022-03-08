int ceilingfan = 2;
int wallfan1 = 3;
int wallfan2 =4;
int light = 7;

void setup() {
  Serial.begin(9600);
  pinMode(A2, INPUT);
  
  pinMode(A0, INPUT);
  
  pinMode(ceilingfan, OUTPUT);
  
  pinMode(wallfan1, OUTPUT);
  
  pinMode(wallfan2, OUTPUT);
  
  pinMode(light, OUTPUT);
  


}

void loop() {
  
  temperature();
  lightcontrol();

}
void temperature()
{
  int value = analogRead(A2);
  Serial.print(value);
  Serial.print("\t");
  Serial.print("\n");

  if(value<=256)
  {
    digitalWrite(ceilingfan, LOW);
    digitalWrite(wallfan1, LOW);
    digitalWrite(wallfan2 , LOW);
    }
    
  else if(value>256 && value<=512) 
  {digitalWrite(ceilingfan, HIGH);
  digitalWrite(wallfan1, LOW);
  digitalWrite(wallfan2 , LOW);}
  
  else if(value>512 && value<=768)
  {digitalWrite(ceilingfan, HIGH);
  digitalWrite(wallfan1, HIGH);
  digitalWrite(wallfan2 , LOW);}
  
  else if(value>768)
  {digitalWrite(ceilingfan, HIGH);
  digitalWrite(wallfan1, HIGH);
  digitalWrite(wallfan2 , HIGH);}
}
void lightcontrol()
{
int lightsensor = analogRead(A0);
 Serial.print(lightsensor);
 
 if(lightsensor<512)
  {digitalWrite(7, HIGH); }
}
