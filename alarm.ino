const int buzzer = 4;
const int trigPin = 8;
const int echoPin = 9;

int greenLED = 3;
int redLED = 2;

long duration;
int distance;

bool alarmOn = false;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(greenLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  pinMode(buzzer, OUTPUT);

  Serial.begin(9600);
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  
  if(distance < 6) {
    alarmOn = true;
  }

    if(distance > 6) {
    alarmOn = false;
  }

  if(alarmOn == false) {
    noTone(buzzer); 
    digitalWrite(greenLED, HIGH);
  }

  if(alarmOn == true){
   digitalWrite(greenLED, LOW);
 
    tone(buzzer, 100);
    digitalWrite(redLED, HIGH);
    delay(100);
    tone(buzzer,200);
    digitalWrite(redLED, LOW);
    delay(100);
    tone(buzzer,300);
    digitalWrite(redLED, HIGH);
    delay(100);
    tone(buzzer,400);
    digitalWrite(redLED, LOW);
    delay(100);
    tone(buzzer,500);
    digitalWrite(redLED, HIGH);
    delay(100);
    tone(buzzer,600);
    digitalWrite(redLED, LOW);
    delay(100);
    tone(buzzer,700);
    digitalWrite(redLED, HIGH);
    delay(100);
    tone(buzzer,800);
    digitalWrite(redLED, LOW);
    delay(100);
    tone(buzzer,900);
    digitalWrite(redLED, HIGH);
    delay(100);
    tone(buzzer,1000);
    digitalWrite(redLED, LOW);
    delay(100);
    tone(buzzer,1100);
    digitalWrite(redLED, HIGH);
    delay(100);
    tone(buzzer,1200);
    digitalWrite(redLED, LOW);
    delay(100);
    tone(buzzer,1300);
    digitalWrite(redLED, HIGH);
    delay(100);
    tone(buzzer,1400);
    digitalWrite(redLED, LOW);
    delay(100);
    tone(buzzer,1500);
    digitalWrite(redLED, HIGH);
    delay(100);
    tone(buzzer,1600);
    digitalWrite(redLED, LOW);
    delay(100);
    tone(buzzer,1700);
    digitalWrite(redLED, HIGH);
    delay(100);
    tone(buzzer,1800);
    digitalWrite(redLED, LOW);
    delay(100);
    digitalWrite(redLED, HIGH);
    tone(buzzer,1900);
    delay(100);
    tone(buzzer,1900);
    digitalWrite(redLED, LOW);
    delay(100);
    tone(buzzer,2000);
    digitalWrite(redLED, HIGH);
    delay(100);
    tone(buzzer,2100);
    digitalWrite(redLED, LOW);
    delay(100);
    tone(buzzer,2200);
    digitalWrite(redLED, HIGH);
    delay(100);
    tone(buzzer,2300);
    digitalWrite(redLED, LOW);
    delay(100);
  }
}
