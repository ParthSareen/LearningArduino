#define led 6
#define knob 0
void setup()
{
pinMode (led, OUTPUT);
Serial.begin(9600);
}
void loop()
{
  int val = analogRead (knob);
  val = map(val, 1, 1024, 1, 255);
  analogWrite(led, val);
  
  Serial.println(val);
}
