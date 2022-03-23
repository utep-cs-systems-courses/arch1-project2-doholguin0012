#ifndef led_included
#define led_included


#define LED_RED BIT0              // P1.0
#define LED_GREEN BIT6            // P1.6
#define LEDS (BIT0 | BIT6)        // P1.0 | P1.6

void led_init();
void led_update();

void red_on(int on);
void green_on(int on);

void leds_on(int on);
void swap_leds(int on);

#endif // included
