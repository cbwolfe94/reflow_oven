#include <stdint.h>
#include "type_defs.h"

#ifndef HD44780U_H
#define HD44780U_H

#define CLEAR_DISPLAY_INSTRUCTION 0x01
#define RESET_CURSOR_INSTRUCTION 0x02
#define FOUR_BIT_RESET_INSTRUCTION 0x20
#define EIGHT_BIT_RESET_INSTRUCTION 0x30
#define SET_DISPLAY_POSITION_INSTRUCTION 0x80

#define LINE_1_START_ADDRESS 0x00
#define LINE_2_START_ADDRESS 0x28
#define LINE_3_START_ADDRESS 0x14
#define LINE_4_START_ADDRESS 0x3C

#define FOUR_BIT_MODE FALSE
#define EIGHT_BIT_MODE TRUE

#define ONE_LINE_DISPLAY FALSE
#define TWO_LINE_DISPLAY TRUE

#define FIVE_TEN_CHARACTER_SET FALSE
#define FIVE_EIGHT_CHARACTER_SET TRUE


void chip_init(struct lcd_t *lcd);

void chip_reset(uint8_t reset_intruction);

void chip_function_set(struct lcd_t *lcd);

void display_on_off(struct lcd_t *lcd);

void display_clear(void);

void chip_entry_mode_set(struct lcd_t *lcd);

void clock_enable_pulse_write(void);

void set_display_position(uint8_t DDRAM_address);

void character_write(uint8_t character);

#endif