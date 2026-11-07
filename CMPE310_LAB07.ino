#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
int voltage=A0;
void setup() {
  pinMode(voltage, INPUT);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
 
}

void loop() {
  
  int voltageMeasure= analogRead(voltage);
  float VoltageCalc=(5.0/1023) * voltageMeasure;

  lcd.setCursor(0, 0);
  lcd.print("Voltage ");
  lcd.print(VoltageCalc);
}


