#include <msp430.h>
#include "buzzer.h"
#include "led.h"
#include "switches.h"
#include "buzzer_tone.h"
#include "state_machines.h"


// SWITCH 1 Majora Mask Healing of Song
void play_song_1()
{
  static char curr_note = 0;
  // Sonic Green Hill
  // All notes of song, 0s are for break in between notes
  //  int notes[47] = {C5, A4, C5, 0, B4, 0, C5, B4, 0, G4, G4, G4, G4, 0, A5, E5, C5, B4, 0, C5, B4, G4, 0, 0, C5, A4, C5,0, B4, C5, 0, B4, G4,0, 0, A4, A4, F4, A4, G4, A4, G4, C4, 0, C5, 0};
  // int n = 47;

  // if (curr_note < n){
  //buzzer_set_period(notes[curr_note]);
  //curr_note++;
  // }
  // else {
  // curr_note = 0;
    // }
  switch(curr_note) {
  case 0:
    buzzer_set_period(B4);
    swap_leds(1);
    curr_note++;
    break;
  case 1:
    buzzer_set_period(A4);
    swap_leds(0);
    curr_note++;
    break;
  case 2:
    buzzer_set_period(F4);
    swap_leds(1);
    curr_note++;
    break;
  case 3:
    buzzer_set_period(B4);
    swap_leds(0);
    curr_note++;
    break;
  case 4:
    buzzer_set_period(A4);
    swap_leds(1);
    curr_note++;
    break;
  case 5:
    buzzer_set_period(F4);
    swap_leds(0);
    curr_note++;
    break;
  case 6:
    buzzer_set_period(B4);
    swap_leds(1);
    curr_note++;
    break;
  case 7:
    buzzer_set_period(A4);
    swap_leds(0);
    curr_note++;
    break;
  case 8:
    buzzer_set_period(E4);
    swap_leds(1);
    curr_note++;
    break;
  case 9:
    buzzer_set_period(D4);
    swap_leds(0);
    curr_note++;
    break;
  case 10:
    buzzer_set_period(E4);
    swap_leds(1);
    curr_note++;
    break;
  case 11:
    buzzer_set_period(E4);
    swap_leds(1);
    curr_note++;
    break;
  case 12:
    buzzer_set_period(E4);
    swap_leds(1);
    curr_note++;
    break;
  case 13:
    buzzer_set_period(B4);
    swap_leds(0);
    curr_note++;
    break;
  case 14:
    buzzer_set_period(A4);
    swap_leds(1);
    curr_note++;
    break;
  case 15:
    buzzer_set_period(F4);
    swap_leds(0);
    curr_note++;
    break;
  case 16:
    buzzer_set_period(B4);
    swap_leds(1);
    curr_note++;
    break;
  case 17:
    buzzer_set_period(A4);
    swap_leds(0);
    curr_note++;
    break;
  case 18:
    buzzer_set_period(F4);
    swap_leds(1);
    curr_note++;
    break;
  case 19:
    buzzer_set_period(B4);
    swap_leds(0);
    curr_note++;
    break;
  case 20:
    buzzer_set_period(A4);
    swap_leds(1);
    curr_note++;
    break;
  case 21:
    buzzer_set_period(E4);
    swap_leds(0);
    curr_note++;
    break;
  case 22:
    buzzer_set_period(D4);
    swap_leds(1);
    curr_note++;
    break;
  case 23:
    buzzer_set_period(E4);
    swap_leds(0);
    curr_note++;
    break;
  case 24:
    buzzer_set_period(E4);
    swap_leds(0);
    curr_note++;
    break;
  case 25:
    buzzer_set_period(E4);
    swap_leds(0);
    curr_note++;
    break;
  case 26:
    buzzer_set_period(F4);
    swap_leds(1);
    curr_note++;
    break;
  case 27:
    buzzer_set_period(C4);
    swap_leds(0);
    curr_note++;
    break;
      
  default:
    curr_note++;
    break;
  }
}

// SWITCH 2
void play_song_2()
{
  static char curr_note = 0;
  int notes[15] = {G4_SHARP, G4_SHARP, 0, B4, B4, 0, A4_SHARP, A4_SHARP, A4_SHARP, A4, 0, E4, 0, D4_SHARP, 0};
  int n = 15;

  if (curr_note < n){
    buzzer_set_period(notes[curr_note]);
    curr_note++;
  }
  else{                         // LOOP SONG
    curr_note = 0;
    
  }
}

// SWITCH 3
void play_song_3()
{
  static char curr_note = 0;

  switch(curr_note){
  case 0:
    buzzer_set_period(C6_SHARP);
    swap_leds(1);
    curr_note++;
    break;
  case 1:
    buzzer_set_period(F6_SHARP);
    swap_leds(0);
    curr_note++;
    break;
  case 2:
    buzzer_set_period(G6_SHARP);
    swap_leds(1);
    curr_note++;
    break;
  case 3:
    buzzer_set_period(A6);
    swap_leds(0);
    curr_note++;
    break;
  case 5:
    buzzer_set_period(C6_SHARP);
    swap_leds(1);
    curr_note++;
    break;
  case 7:
    buzzer_set_period(F6_SHARP);
    swap_leds(0);
    curr_note++;
    break;
  case 8:
    buzzer_set_period(G6_SHARP);
    swap_leds(1);
    curr_note++;
    break;
  case 10:
    buzzer_set_period(A6);
    swap_leds(0);
    curr_note++;
    break;
  case 14:
    buzzer_set_period(D6);
    swap_leds(1);
    curr_note++;
    break;
  case 15:
    buzzer_set_period(F6_SHARP);
    swap_leds(0);
    curr_note++;
    break;
  case 16:
    buzzer_set_period(G6_SHARP);
    swap_leds(1);
    curr_note++;
    break;
  case 18:
    buzzer_set_period(D6);
    swap_leds(0);
    curr_note++;
    break;
  case 20:
    buzzer_set_period(F6_SHARP);
    swap_leds(1);
    curr_note++;
    break;
  case 21:
    buzzer_set_period(G6_SHARP);
    swap_leds(0);
    curr_note++;
    break;
  case 22:
    buzzer_set_period(A6);
    swap_leds(1);
    curr_note++;
    break;
  case 26:                              // LOOP BACK TO BEGINNING
    buzzer_set_period(0);
    leds_on(0);
    curr_note = 0;
    break;
  default:
    curr_note++;
    break;
  }
}

// SWITCH 4 
