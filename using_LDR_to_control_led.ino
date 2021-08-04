const int LEDPin = 13;
const int LDRPin = A0;
void setup() {
Serial.begin(9600);
pinMode(LEDPin, OUTPUT);
pinMode(LDRPin, INPUT);
}
void loop() {

int ldrStatus = analogRead(LDRPin);

if (ldrStatus <= 30) {

digitalWrite(LEDPin, HIGH);

Serial.print(" LIGHT ON : ");

Serial.println(ldrStatus);

} else {

digitalWrite(LEDPin, LOW);

Serial.print("LIGHT OFF: ");

Serial.println(ldrStatus);
}   
 }
