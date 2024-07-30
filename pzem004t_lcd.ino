#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <PZEM004Tv30.h>

// Inisialisasi LCD dengan alamat I2C (0x27 atau 0x3F biasanya)
LiquidCrystal_I2C lcd(0x27, 16, 2); 

// Inisialisasi PZEM dengan pin yang sesuai
PZEM004Tv30 pzem(8, 9); // Software Serial pin 8 (RX) & 9 (TX)

void setup() {
  // Inisialisasi komunikasi serial dengan baud rate 9600 bps
  Serial.begin(9600);
  // Inisialisasi LCD
  lcd.begin(16, 2);
  lcd.backlight();
  lcd.clear();
}

void loop() {
  float voltage = pzem.voltage();
  if (!isnan(voltage)) {
    Serial.print("Voltage: ");
    Serial.print(voltage);
    Serial.println("V");
    lcd.setCursor(0, 0);
    lcd.print("Voltage: ");
    lcd.print(voltage);
    lcd.print("V  ");
  } else {
    Serial.println("Error reading voltage");
    lcd.setCursor(0, 0);
    lcd.print("Voltage: ERR");
  }

  float current = pzem.current();
  if (!isnan(current)) {
    Serial.print("Current: ");
    Serial.print(current);
    Serial.println("A");
    lcd.setCursor(0, 1);
    lcd.print("Current: ");
    lcd.print(current);
    lcd.print("A  ");
  } else {
    Serial.println("Error reading current");
    lcd.setCursor(0, 1);
    lcd.print("Current: ERR");
  }

  delay(2000);

  float power = pzem.power();
  if (!isnan(power)) {
    Serial.print("Power: ");
    Serial.print(power);
    Serial.println("W");
    lcd.setCursor(0, 0);
    lcd.print("Power: ");
    lcd.print(power);
    lcd.print("W  ");
  } else {
    Serial.println("Error reading power");
    lcd.setCursor(0, 0);
    lcd.print("Power: ERR");
  }

  float energy = pzem.energy();
  if (!isnan(energy)) {
    Serial.print("Energy: ");
    Serial.print(energy, 3);
    Serial.println("kWh");
    lcd.setCursor(0, 1);
    lcd.print("Energy: ");
    lcd.print(energy, 3);
    lcd.print("kWh  ");
  } else {
    Serial.println("Error reading energy");
    lcd.setCursor(0, 1);
    lcd.print("Energy: ERR");
  }

  delay(2000);

  float frequency = pzem.frequency();
  if (!isnan(frequency)) {
    Serial.print("Frequency: ");
    Serial.print(frequency, 1);
    Serial.println("Hz");
    lcd.setCursor(0, 0);
    lcd.print("Frequency: ");
    lcd.print(frequency, 1);
    lcd.print("Hz  ");
  } else {
    Serial.println("Error reading frequency");
    lcd.setCursor(0, 0);
    lcd.print("Freq: ERR");
  }

  float pf = pzem.pf();
  if (!isnan(pf)) {
    Serial.print("PF: ");
    Serial.println(pf);
    lcd.setCursor(0, 1);
    lcd.print("PF: ");
    lcd.print(pf);
    lcd.print("  ");
  } else {
    Serial.println("Error reading power factor");
    lcd.setCursor(0, 1);
    lcd.print("PF: ERR");
  }

  delay(2000);
}
