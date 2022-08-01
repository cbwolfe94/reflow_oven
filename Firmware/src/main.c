#include "application.h"
#include "MAX31855.h"
#include "lcd.h"
#include "stm32f100xb.h"
#include "stm32f1xx_hal.h"


int main(void)
{
    uint8_t x[20] = "Hello";
    uint8_t y[20] = "World";


    HAL_Init();

    GPIO_InitTypeDef GPIO_init_struct;

    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOC_CLK_ENABLE();
    
    GPIO_init_struct.Pin = GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10;
    GPIO_init_struct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_init_struct.Speed = GPIO_SPEED_FREQ_HIGH;

    HAL_GPIO_Init(GPIOC, &GPIO_init_struct);

    GPIO_init_struct.Pin = GPIO_PIN_7 | GPIO_PIN_8 | GPIO_PIN_9 | GPIO_PIN_10 | GPIO_PIN_11 | GPIO_PIN_12;
    GPIO_init_struct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_init_struct.Speed = GPIO_SPEED_FREQ_HIGH;

    HAL_GPIO_Init(GPIOA, &GPIO_init_struct);


    /*
        D0 = PC6
        D1 = PC7
        D2 = PC8
        D3 = PC9
        D4 = PA8
        D5 = PA9
        D6 = PA10
        D7 = PA11
        EN = PA12
        RS = PA13
    */


   //lcd_init();
   //lcd_write(1, x);
   //lcd_write(2, y);

    return 0;
}