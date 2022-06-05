#include <Servo.h>
Servo sg90;
int pos = 0;
int pozisyon = 0;

unsigned int sure,mesafe;
int ledKirmizi=2;
int ledYesil=3;
int echo=6;
int trig=7;


void setup() {
  pinMode(buzzerPin, OUTPUT);       //Buzzerın takılacağı pini OUTPUT olarak ayarlıyoruz.
  pinMode(ledKirmizi,OUTPUT);
  pinMode(ledYesil,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  Serial.begin(9600);
  
}
void loop() {
  digitalWrite(trig,HIGH);
  digitalWrite(trig,LOW);
  sure=pulseIn(echo,HIGH);
  mesafe=(sure/2)/29.1;
  Serial.println(mesafe);
  delay(1000);
  
 
  if (mesafe<15)
  {
    digitalWrite(ledKirmizi,HIGH);
    //delay(2000);
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledYesil,LOW);
  
  }
  else {
    digitalWrite(ledKirmizi,LOW);
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledYesil,HIGH);
    
  }
 
}
