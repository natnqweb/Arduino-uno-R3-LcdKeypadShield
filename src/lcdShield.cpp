  #include <lcdShield.h>


  lcdShield::lcdShield(LiquidCrystal *_LiquidCrystal, uint8_t analogButton = A0)
  {
	  
  
        _button_shield = analogButton;
        setLCD(_LiquidCrystal);
        pinMode(_button_shield, INPUT);
   }
    static void lcdShield::setLCD(LiquidCrystal *_LiquidCrystal)
    {
        _lcd = _LiquidCrystal;
    }
    uint8_t lcdShield::Buttonpressed()
    {
        int val = analogRead(_button_shield);
        if (val > 500 && val <= 750)
            return 1;
        else if (val > 350 && val < 500)
            return 2;
        else if (val > 200 && val < 350)
            return 3;
        else if (val > 50 && val < 200)
            return 4;
        else if (val >= 0 && val < 50)
            return 5;
        else
            return 0;
    }
    int lcdShield::get_analogread()
    {
        return analogRead(_button_shield);
    }
    void lcdShield::init(uint8_t columns = 16, uint8_t rows = 2)
    {
        _columns = columns;
        _rows = rows;
        _lcd->begin(_columns, _rows);
    }
    void lcdShield::print(String data)
    {
        _lcd->print(data);
    }
    void lcdShield::println(String data)
    {
        _lcd->println(data);
    }
    void lcdShield::setCursor(uint8_t collumn, uint8_t roww)
    {
        _lcd->setCursor(collumn, roww);
    }
    void lcdShield::clear()
    {
        _lcd->clear();
    }
    void lcdShield::display()
    {
        _lcd->display();
    }
    void lcdShield::noDisplay()
    {
        _lcd->noDisplay();
    }