int ldrPin = A4;
int sirenPin = 11;
int ledPin = A0;
long ldrValue1, ldrValue2;


void setup() {
  pinMode (sirenPin,OUTPUT);
  pinMode (ledPin,OUTPUT);
  pinMode (ldrPin,INPUT);

}

void loop(void) {
ldrValue1 = analogRead(ldrPin);
delay(10);
ldrValue2 = analogRead(ldrPin);

if (ldrValue1-ldrValue2 > 20) {
  digitalWrite(sirenPin,HIGH);
  digitalWrite(ledPin,HIGH);
  delay(1000);
}
else{
  digitalWrite(sirenPin,LOW);
  digitalWrite(ledPin,LOW);
}
}
