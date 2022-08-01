#include <stdint.h>
#ifndef LCD_H
#define LCD_H
#define MAX_CHARACTERS_PER_ROW 20

void lcd_init(struct lcd_t *lcd);

void lcd_write(uint8_t row, uint8_t *text);


#endif