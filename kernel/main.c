#include "pico/stdio.h"
#include "pico/stdlib.h"

int main() {
    puts_raw("Hello, world!\n");

#ifndef PICO_DEFAULT_LED_PIN
#warning blinking led requires a board with a regular LED
#else
    const uint LED_PIN = PICO_DEFAULT_LED_PIN;
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    while (true) {
        gpio_put(LED_PIN, 1);
        sleep_ms(1000);
        gpio_put(LED_PIN, 0);
        sleep_ms(1000);
    }
#endif
    return 0;
}
