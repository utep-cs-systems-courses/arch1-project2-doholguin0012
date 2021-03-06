#ifndef switches_included
#define switches_included

#define SW1 BIT0   // Switch 1 is p2.0
#define SW2 BIT1   // Switch 2 is p2.1
#define SW3 BIT2   // Switch 3 is p2.2
#define SW4 BIT3   // Switch 4 is p2.3
#define SWITCHES (SW1 | SW2 | SW3 | SW4)  // All four switches on Port 2

void switch_init();
void switch_interrupt_handler();

extern int sw1_status;
extern int sw2_status;
extern int sw3_status;
extern int sw4_status;

extern int sw1_press_state;
extern int sw2_press_state;
extern int sw3_press_state;
extern int sw4_press_state;



#endif 
