#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

// Pins
#define CURRENT_IN A0
#define CURRENT_OUT A1
#define BUZZER 8

float sensitivity = 0.185; // ACS712 5A module
float threshold = 0.3;     // Theft current difference (Amps)

void setup() {
  pinMode(BUZZER, OUTPUT);
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Power Monitor");
  delay(2000);
  lcd.clear();
}

void loop() {
  float currentIn = readCurrent(CURRENT_IN);
  float currentOut = readCurrent(CURRENT_OUT);

  float diff = abs(currentIn - currentOut);

  lcd.setCursor(0, 0);
  lcd.print("In:");
  lcd.print(currentIn);
  lcd.print("A ");

  lcd.setCursor(0, 1);
  lcd.print("Out:");
  lcd.print(currentOut);
  lcd.print("A ");

  delay(1500);

  if (diff > threshold) {
    theftDetected(diff);
  } else {
    digitalWrite(BUZZER, LOW);
  }
}

float readCurrent(int pin) {
  int sensorValue = analogRead(pin);
  float voltage = (sensorValue * 5.0) / 1023.0;
  float current = (voltage - 2.5) / sensitivity;
  return abs(current);
}

void theftDetected(float diff) {
  lcd.clear();
  lcd.print("THEFT ALERT!");
  lcd.setCursor(0, 1);
  lcd.print("Diff:");
  lcd.print(diff);
  lcd.print("A");

  digitalWrite(BUZZER, HIGH);
  delay(3000);
  lcd.clear();
}
