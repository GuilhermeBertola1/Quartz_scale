#include "var.h"

String M = "Massa";
String Freq = "Frequencia";
String Coef = "Coef. linear";
String Esp = "Espessura film.";

int f = 0, g = 0, h = 0, j = 0;

unsigned ScLenght[4] = {
    M.length() + 3,
    Freq.length() + 3,
    Coef.length() + 3,
    Esp.length() + 3
};

byte arrow_up[8] = {
    0b00100,
    0b01110,
    0b10101,
    0b00100,
    0b00100,
    0b00100,
    0b00100,
    0b00000
};

byte arrow_down[8] = {
    0b00100,
    0b00100,
    0b00100,
    0b00100,
    0b10101,
    0b01110,
    0b00100,
    0b00000
};

byte line[8] = {
    0b00100,
    0b00100,
    0b00100,
    0b00100,
    0b00100,
    0b00100,
    0b00100,
    0b00100
};

byte arrow_left[8] = {
    0b00000,
    0b00000,
    0b01000,
    0b11111,
    0b01000,
    0b00000,
    0b00000,
    0b00000
};
