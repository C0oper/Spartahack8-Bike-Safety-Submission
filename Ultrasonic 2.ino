const int trig = 12;
const int echo = 13;

const int speaker = 2;
//speaker and light

int duration = 0;
int distance = 0;

void setup() 
{
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  
  pinMode(speaker , OUTPUT);
 

  
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(trig , HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig , LOW);


  duration = pulseIn(echo , HIGH);
  distance = (duration/2) / 28.5 ;
  Serial.println(distance);
  

  if ( distance <= 90 )
  {
    digitalWrite(speaker, HIGH);
  }
  else
  {
    digitalWrite(speaker, LOW);
  }


}