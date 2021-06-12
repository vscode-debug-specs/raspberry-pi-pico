#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/pio.h"

int main()
{
    stdio_init_all();

    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init(LED_PIN);
    gpio_init(6);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    gpio_set_dir(6, GPIO_OUT);
    int num = 0;

    printf("Hello, world!\n");

    while (true) {
        if(num%2){
            gpio_put(LED_PIN, 1);
            gpio_put(6, 1);
        }else{
            gpio_put(LED_PIN, 0);
            gpio_put(6, 0);
        }
        sleep_ms(500);
        printf("num=%d\n", num);
        num++;
        num++;
    }

    return 0;
}
