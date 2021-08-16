#ifndef lcdShield_h
#define lcdShield_h
#include <Arduino.h>
#include <LiquidCrystal.h>
#define select 1
#define left 2 
#define down 3
#define up 4
#define right 5
#define notpressed 0
typedef uint8_t Pins;

class lcdShield
{
public:
    uint8_t _columns, _rows;
	Pins _button_shield;
	lcdShield(LiquidCrystal *_LiquidCrystal, uint8_t analogButton = A0);
    void setLCD(LiquidCrystal *);
    uint8_t Buttonpressed();
    int get_analogread();
    void init(uint8_t columns = 16, uint8_t rows = 2);
    void print(String data);
    void println(String data);
    void setCursor(uint8_t collumn, uint8_t roww);
    void clear();
    void display();
    void noDisplay();

private:
    LiquidCrystal *_lcd;
};
#endif	