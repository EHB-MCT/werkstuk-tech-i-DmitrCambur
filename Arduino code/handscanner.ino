#define ledPin 12
#define ldrPin1 A0
#define ldrPin2 A1
#define ldrPin3 A2
#define ldrPin4 A3
#define ldrPin5 A4

void setup() {
Serial.begin(9600);

pinMode(ledPin, OUTPUT);

pinMode(ldrPin1, INPUT);
pinMode(ldrPin2, INPUT);
pinMode(ldrPin3, INPUT);
pinMode(ldrPin4, INPUT);
pinMode(ldrPin5, INPUT);

}

void loop() {

int ldrStatus1 = analogRead(ldrPin1);
int ldrStatus2 = analogRead(ldrPin2);
int ldrStatus3 = analogRead(ldrPin3);
int ldrStatus4 = analogRead(ldrPin4);
int ldrStatus5 = analogRead(ldrPin5);
Serial.println(ldrStatus1);
Serial.println(ldrStatus2);
Serial.println(ldrStatus3);
Serial.println(ldrStatus4);
Serial.println(ldrStatus5);
delay(100);

if (ldrStatus1 >=950 && ldrStatus2 >=950 && ldrStatus3 >=950 && ldrStatus4 >=950 && ldrStatus5 >=950) { 
digitalWrite(ledPin, HIGH);
Serial.println("LDR is DARK, LED is ON");
} 
else {
digitalWrite(ledPin, LOW);
Serial.println("LED OFF");
}

}
