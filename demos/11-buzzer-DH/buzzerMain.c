#include <msp430.h>
#include "libTimer.h"
#include "buzzer.h"

//defining the buttons setups
#define SW0 BIT0
#define SW1 BIT1
#define SW2 BIT2
#define SW3 BIT3
#define SWITCHES (SW0 | SW1 | SW2 | SW3)

int main() {
    configureClocks();
 
    buzzer_init();
    buzzer_set_period(250);	/* start buzzing!!! 2MHz/1000 = 2kHz*/

    configureClocks();
    enableWDTInterrupts();

    or_sr(0x18);          // CPU off, GIE on
}

int freqLimit = 5;
int freqCount = 5;
int secondCount = 0;
int period = 250;

void
__interrupt_vec(WDT_VECTOR) WDT()
{
  freqCount--;
  if (freqCount <= freqLimit) {
    freqCount=5;
    period -= 10;
    buzzer_set_period(period);
  }
  else {
    buzzer_set_period(0);
  }
  //second Count
  secondCount++;
  if(secondCount >= 100) {
    secondCount = 0;
    freqLimit++;
  }
  if (freqLimit >= 0 ) {
    freqLimit = 8;
  }
}
