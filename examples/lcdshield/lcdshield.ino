#include <lcdShield.h>

//---------------------------------------default------------------------
Pins rs = 8, enable = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7, analogpin = A0;
LiquidCrystal lcd(rs, enable, d4, d5, d6, d7);
lcdShield lcdshield(&lcd); // or lcdShield lcdshield(&lcd,analogpin) //A0 is default
//---------------------------------------default------------------------

void setup()
{
  lcdshield.init();// by default it is init(16,2)

  delay(1000);
}
void loop()
{

  switch (lcdshield.Buttonpressed())
  {
    case select:
      lcdshield.setCursor(0, 0);
      lcdshield.print("select");
      break;
    case left:
      lcdshield.setCursor(0, 0);
      lcdshield.print("left");
      break;
    case right:
      lcdshield.setCursor(0, 0);
      lcdshield.print("right");
      break;
    case up:
      lcdshield.setCursor(0, 0);
      lcdshield.print("up");
      break;
    case down:
      lcdshield.setCursor(0, 0);
      lcdshield.print("down");
      break;
    default:
      lcdshield.clear();
      break;
  }
}