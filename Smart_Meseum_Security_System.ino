#include <LiquidCrystal.h>

// LCD Pins
LiquidCrystal lcd(12, 11, A1, A2, A3, A4);

// Sensor Pins
const int pirPin = 2;
const int ldrPin = A0;

// Output Pins
const int greenLED = 3;
const int yellowLED = 4;
const int redLED = 5;
const int buzzer = 6;

void setup()
{
  pinMode(pirPin, INPUT);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);

  pinMode(buzzer, OUTPUT);

  lcd.begin(16,2);

  lcd.setCursor(0,0);
  lcd.print("SMART MUSEUM");

  lcd.setCursor(0,1);
  lcd.print("SECURITY SYS");

  delay(2000);

  lcd.clear();

  Serial.begin(9600);
}

void loop()
{
  int pirState = digitalRead(pirPin);
  int ldrValue = analogRead(ldrPin);

  Serial.print("PIR = ");
  Serial.print(pirState);

  Serial.print("   LDR = ");
  Serial.println(ldrValue);

  // SAFE CONDITION
  if(pirState == LOW && ldrValue > 800)
  {
    digitalWrite(greenLED,HIGH);
    digitalWrite(yellowLED,LOW);
    digitalWrite(redLED,LOW);

    noTone(buzzer);

    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("MUSEUM SAFE");

    lcd.setCursor(0,1);
    lcd.print("ALL SECURE");
  }

  // WARNING CONDITION
  else if(pirState == LOW && ldrValue >=400 && ldrValue<=800)
  {
    digitalWrite(greenLED,LOW);
    digitalWrite(yellowLED,HIGH);
    digitalWrite(redLED,LOW);

    noTone(buzzer);

    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("LOW LIGHT");

    lcd.setCursor(0,1);
    lcd.print("CHECK ROOM");
  }

  // CRITICAL CONDITION
  else
  {
    digitalWrite(greenLED,LOW);
    digitalWrite(yellowLED,LOW);
    digitalWrite(redLED,HIGH);

    tone(buzzer,1000);

    lcd.clear();

    lcd.setCursor(0,0);
    lcd.print("SECURITY");

    lcd.setCursor(0,1);
    lcd.print("ALERT!");
  }

  delay(1000);
}