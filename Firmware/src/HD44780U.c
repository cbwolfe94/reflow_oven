#include "HD44780U.h"
#include "stm32f1xx_hal.h"

void chip_init(struct lcd_t *lcd) {
    //Pull register select line low
    //Wait for at least one microsecond
    HAL_Delay(1);

    switch (lcd->mode) {
        case FALSE:
            chip_reset(EIGHT_BIT_RESET_INSTRUCTION);
            clock_enable_pulse_write();

            chip_reset(EIGHT_BIT_RESET_INSTRUCTION);
            clock_enable_pulse_write();

            chip_reset(EIGHT_BIT_RESET_INSTRUCTION);
            clock_enable_pulse_write();

            chip_reset(FOUR_BIT_RESET_INSTRUCTION);
            clock_enable_pulse_write();
            break;

        case TRUE:
            chip_reset(EIGHT_BIT_RESET_INSTRUCTION);
            clock_enable_pulse_write();

            chip_reset(EIGHT_BIT_RESET_INSTRUCTION);
            clock_enable_pulse_write();

            chip_reset(EIGHT_BIT_RESET_INSTRUCTION);
            clock_enable_pulse_write();
            break;

        default:
            return;
            break;
    }


    //chip function set
    //clock enable pulse write

    //chip display control
    //clock enable pulse write

    //chip display clear
    //clock enable pulse write
    

    //Pull register select line high

}

void chip_reset(uint8_t reset_instruction) {
    //Write reset intruction to chip
}

void chip_function_set(struct lcd_t *lcd)
{
    //Write function set instruction to chip
}

void chip_display_control(struct lcd_t *lcd)
{
    //Write display control instruction to chip
}

void chip_display_clear(void)
{
    //Write display clear instruction to chip
}

void chip_entry_mode_set(struct lcd_t *lcd)
{
    //If mode = 0, 4 bit mode
        //chip_reset(EIGHT_BIT_RESET_INSTRUCTION)
        //clock enable pulse write()

        //chip_reset(EIGHT_BIT_RESET_INSTRUCTION)
        //clock enable pulse write()

        //chip_reset(EIGHT_BIT_RESET_INSTRUCTION)
        //clock enable pulse write()

        //chip_reset(FOUR_BIT_RESET_INSTRUCTION)
        //clock enable pulse write()

    //If mode = 0, 4 bit mode
        //chip_reset(EIGHT_BIT_RESET_INSTRUCTION)
        //clock enable pulse write()

        //chip_reset(EIGHT_BIT_RESET_INSTRUCTION)
        //clock enable pulse write()

        //chip_reset(EIGHT_BIT_RESET_INSTRUCTION)
        //clock enable pulse write()

        //chip_reset(FOUR_BIT_RESET_INSTRUCTION)
        //clock enable pulse write()
    //Write entry mode set instruction to chip
}

void clock_enable_pulse_write(void)
{
    //Pull enable low
    //Wait for at least a microsecond
    

    //Pull enable high
    //Wait for at least a microsecond

    //Pull enable low
    //Wait at least 37 microseconds for commands to execute
}

void set_display_position(uint8_t DDRAM_address) {
    //Pull register select line low
    //Got to DDRAM address

    //Pull register select line high
}

void character_write(uint8_t character) {
    //Pull register select line high

    //Send 8 bit character to lcd screen

    //clock enable pulse write

}