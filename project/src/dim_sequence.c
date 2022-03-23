#include "led.h"
#include "state_machines.h"

void dim_sequence()
{
  static int dim_state = 0;

  switch (dim_state){
  case 0:
    red_dim_75();
    green_dim_25();
    dim_state++;
    break;

  case 1:
    red_dim_25();
    green_dim_75();
    dim_state++;
    break;
  case 2:
    red_dim_50();
    green_dim_50();
    dim_state = 0;
    break;
  default:
    break;
  }
}
