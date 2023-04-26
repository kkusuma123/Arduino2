#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int i;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin();
  lcd.backlight();
  lcd.noCursor();
  lcd.noBlink();
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (7,OUTPUT);
  pinMode (12,OUTPUT);  
  Serial.begin(9600);  
}
 
 
 
void loop() {
  digitalWrite(5, HIGH);
  for (i=10;i>=0;i--){
    lcd.setCursor(7,0);
    lcd.print(i);
    delay(1100);
    lcd.clear();
    tone (12,100);  
    delay(500);    
    noTone (12); 
    delay(1000); 
  } 
  digitalWrite(5, LOW);
  
  
  digitalWrite(6, HIGH);
  for (i=5;i>=0;i--){
    lcd.setCursor(0,1);
    lcd.print(i); 
    delay(1100);
    lcd.clear(); 
    tone (12,100);  
    delay(500);    
    noTone (12); 
    delay(1100);  
  } 
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  for (i=10;i>=0;i--){
    lcd.setCursor(0,1);
    lcd.print(i);
    delay(1100);
    lcd.clear();
    tone (12,100);  
    delay(500);    
    noTone (12); 
    delay(1100); 
    
  }    
  digitalWrite(7, LOW);
 
}
