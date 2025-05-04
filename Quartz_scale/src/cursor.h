#include <displayH.h>

void Clicker(int y, int z){
    if(y){
        switch (f-1)
        {
        case 0:
            Serial.print(M);
            DisplayMass();
            j++;
            break;
        case 1:
            Serial.print(Freq);
            DisplayFreq();
            j++;
            break;
        case 2:
            Serial.print(Coef);
            DisplayCoef();
            j++;
            break;
        case 3:
            Serial.print(Esp);
            DisplayEsp();
            j++;
            break;
        default:
            break;
        }
    }
    if(z){
        lcd.clear();
        h = 0;
        j = 0;
        g = 0;
        f -= 1;
    }
}

void Cursor(int x){
    if(g == 0){
        lcd.setCursor(ScLenght[f], f);
        lcd.write(3);
        f++;
        g++;
    }
    if(x){
        if(f <= 4){
            if(f != 4){ 
                lcd.setCursor(ScLenght[f], f);
                lcd.write(3);
            }
            if(f > 0){
                lcd.setCursor(ScLenght[f - 1], f - 1);
                lcd.print(" ");
            }
            f++;
            //Serial.println(f);
        }
        if(f > 4){
            lcd.setCursor(ScLenght[f - 1], f - 1);
            lcd.print(" ");
            f = 0;
            lcd.setCursor(ScLenght[f], f);
            lcd.write(3);
            f++;
        }
    }
}