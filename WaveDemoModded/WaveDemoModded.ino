int bluePin = 2;
int greenPin= 3;
int yellowPin= 4;
int orangePin = 5;

int currentStep = 0;


void setup() {
  // put your setup code here, to run once:
pinMode (bluePin, OUTPUT);
pinMode (greenPin, OUTPUT);
pinMode (yellowPin, OUTPUT);
pinMode (orangePin, OUTPUT);

digitalWrite (bluePin, LOW);
digitalWrite (greenPin, LOW);
digitalWrite (yellowPin, LOW);
digitalWrite (orangePin, LOW);
}
void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (bluePin, HIGH);
delay(3);
digitalWrite (bluePin, LOW);
delay(3);
digitalWrite (greenPin, HIGH);
delay(3);
digitalWrite (greenPin, LOW);
delay(3);
digitalWrite (yellowPin, HIGH);
delay(3);
digitalWrite (yellowPin, LOW);
delay(3);
digitalWrite (orangePin, HIGH);
delay(3);
digitalWrite (orangePin, LOW);
delay(3);
}
