#include <msp430.h>
#include "led.h"
#include "buzzer.h"
#include "state_machines.h"
#include "switches.h"

int  sw1_status = 0;
int  sw2_status = 0;
int  sw3_status = 0;
int  sw4_status = 0;
static char switch_update_interrupt_sense()
{
  char p2val = P2IN;

  // Update switch interrupt to detect changes from current buttons
  P2IES |= (p2val & SWITCHES);    // If switch up, sense down
  P2IES &= (p2val | ~SWITCHES);   // If switch down, sense up

  return p2val;
}

void switch_init()
{
  // Setup switch
  P2REN |= SWITCHES;    // Enables resistors for switches
  P2IE |= SWITCHES;     // Enable interrupts from switches
  P2OUT |= SWITCHES;    // Pull-ups for switches
  P2DIR &= ~SWITCHES;   // Set switches' bits for input
  switch_update_interrupt_sense();
  led_update();
}

void switch_interrupt_handler()
{
  char p2val = switch_update_interrupt_sense();

  int prev1 = sw1_status;
  int prev2 = sw2_status;
  int prev3 = sw3_status;
  int prev4 = sw4_status;



  // Checks if button has been pressed
  sw1_status = (p2val & SW1) ? 0 : 1;
  sw2_status = (p2val & SW2) ? 0 : 1;
  sw3_status = (p2val & SW3) ? 0 : 1;
  sw4_status = (p2val & SW4) ? 0 : 1;
  // Switch Selection and reset

  if (prev1 != sw1_status && sw1_status){
    sw1_press_state ^= 1;
    sw2_press_state = 0;
    sw3_press_state = 0;
    sw4_press_state = 0;
  }

  else if (prev2 != sw2_status && sw2_status){
    sw2_press_state ^= 1;
    sw1_press_state = 0;
    sw3_press_state = 0;
    sw4_press_state = 0;
  }

  else if (prev3 != sw3_status && sw3_status){
    sw3_press_state ^= 1;
    sw1_press_state = 0;
    sw2_press_state = 0;
    sw4_press_state = 0;
  }
  
  else if (prev4 != sw4_status && sw4_status){

    sw4_press_state ^= 1;
    sw1_press_state = 0;
    sw2_press_state = 0;
    sw3_press_state = 0;
  }
}
