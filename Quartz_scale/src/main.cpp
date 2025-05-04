#include <Arduino.h>
#include <FreqCountESP.h>
#include <Bounce2.h>
#include <managerDisplay.h>

#define button 19
#define button2 18
#define button3 2
#define button4 4

Bounce debouncer = Bounce();
Bounce debouncer2 = Bounce();

void setup() {
    lcd.init();
    lcd.clear();         
    lcd.backlight();

    lcd.createChar(0, arrow_up);
    lcd.createChar(1, arrow_down);
    lcd.createChar(2, line);
    lcd.createChar(3, arrow_left);

    pinMode(button, INPUT_PULLUP);
    pinMode(button2, INPUT_PULLUP);
    pinMode(button3, INPUT_PULLUP);
    pinMode(button4, INPUT_PULLUP);
    debouncer.attach(button);
    debouncer.interval(5);
    debouncer2.attach(button2);
    debouncer2.interval(5);
    Serial.begin(115200);
}
  
void loop() {
    debouncer.update();
    debouncer2.update();
    int ch1 = !digitalRead(button3);
    int ch2 = !digitalRead(button4);
    ManagerDisplay(debouncer.fell(), debouncer2.fell(), ch1);
    Serial.print(ch1);
}