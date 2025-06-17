#include <LiquidCrystal_I2C.h>

// Pin setup
const int tempPin = A0;
const int buttonPin = 2;

// State variables
int buttonPresses = 0;
bool lastButtonState = LOW;

// LCD: Address 0x27 is common, adjust if needed
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(buttonPin, INPUT);
  lcd.begin();
  lcd.backlight();
  Serial.begin(9600);
}

void loop() {
  // Read temperature from LM35
  int analogValue = analogRead(tempPin);
  float voltage = analogValue * (5.0 / 1023.0);
  float temperatureC = voltage * 100;

  // Read button state
  bool currentButtonState = digitalRead(buttonPin);
  if (currentButtonState == HIGH && lastButtonState == LOW) {
    buttonPresses++;
    delay(200); // debounce delay
  }
  lastButtonState = currentButtonState;

  // Display on LCD
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperatureC, 1);
  lcd.print(" C");

  lcd.setCursor(0, 1);
  lcd.print("Presses: ");
  lcd.print(buttonPresses);

  // Also output to Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print(" C | Button Presses: ");
  Serial.println(buttonPresses);

  delay(1000);
}
