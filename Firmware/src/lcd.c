#include "lcd.h"
#include "HD44780U.h"

void lcd_init(struct lcd_t *lcd)
{
    chip_init(lcd);
}

void lcd_write(uint8_t row, uint8_t *text)
{
    switch (row) {
        case 1:
            set_display_position(LINE_1_START_ADDRESS);
            break;

        case 2:
            set_display_position(LINE_2_START_ADDRESS);
            break;

        case 3:
            set_display_position(LINE_3_START_ADDRESS);
            break;

        case 4:
            set_display_position(LINE_4_START_ADDRESS);
            break;
        
        default:
            return;
            break;
    }

    for (int i = 0; i < MAX_CHARACTERS_PER_ROW; i++) {
        character_write(*(text + i));
    }
    
}