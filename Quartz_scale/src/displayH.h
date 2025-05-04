#include <LiquidCrystal_I2C.h>
#include <var.h>

LiquidCrystal_I2C lcd(0x27, 20, 4);


void displayHome(){

    // scroll bar -----
    lcd.setCursor(0,0);
    lcd.write(0);
    lcd.setCursor(0,1);
    lcd.write(2);
    lcd.setCursor(0,2);
    lcd.write(2);
    lcd.setCursor(0,3);
    lcd.write(1);
    // ----------------

    // topics
    lcd.setCursor(2,0);
    lcd.print(M);
    lcd.setCursor(2,1);
    lcd.print(Freq);
    lcd.setCursor(2,2);
    lcd.print(Coef);
    lcd.setCursor(2,3);
    lcd.print(Esp);

}

void DisplayMass(){
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print(M);
    lcd.print(":");
    lcd.setCursor(M.length() + 1, 0);
}

void DisplayFreq(){
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print(Freq);
    lcd.print(":");
    lcd.setCursor(Freq.length() + 1, 0);
}

void DisplayCoef(){
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print(Coef);
    lcd.print(":");
    lcd.setCursor(Coef.length() + 1, 0);
}

void DisplayEsp(){
    lcd.clear();
    lcd.setCursor(1,0);
    lcd.print(Esp);
    lcd.print(":");
    lcd.setCursor(Esp.length() + 1, 0);
}