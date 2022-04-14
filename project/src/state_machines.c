
#include <msp430.h>
#include "buzzer.h"
#include "led.h"
#include "switches.h"
#include "buzzer_tone.h"
#include "state_machines.h"

// SWITCH 1 Majora Mask Healing of Song by Koji Kondo
void play_song_1()
{
 static char curr_note = 0;
  //Sonic Green Hill
  // All notes of song, 0s are for break in between notes
  /*int notes[47] = {C5, A4, C5, 0, B4, 0, C5, B4, 0, G4, G4, G4, G4, 0, A5, E5, C5, B4, 0, C5, B4, G4, 0, 0, C5, A4, C5,0, B4, C5, 0, B4, G4,0, 0, A4, A4, F4, A4, G4, A4, G4, C4, 0, C5, 0};
  int n = 47;
  
  if (curr_note < n){
    buzzer_set_period(notes[curr_note]);
    curr_note++;
  }
  else {
    curr_note = 0;
  }*/
  switch(curr_note) {
  case 0:
    buzzer_set_period(B4);
    swap_leds(1);
    curr_note++;
    break;
  case 1:
    buzzer_set_period(B4);
    curr_note++;
    break;
  case 2:
    buzzer_set_period(A4);
    swap_leds(0);
    curr_note++;
    break;
  case 3:
    buzzer_set_period(A4);
    curr_note++;
    break;
  case 4:
    buzzer_set_period(F4);
    swap_leds(1);
    curr_note++;
    break;
  case 5:
    buzzer_set_period(F4);
    curr_note++;
    break;
  case 6:
    buzzer_set_period(B4);
    swap_leds(0);
    curr_note++;
    break;
  case 7:
    buzzer_set_period(B4);
    curr_note++;
    break;
  case 8:
    buzzer_set_period(A4);
    swap_leds(1);
    curr_note++;
    break;
  case 9:
    buzzer_set_period(A4);
    curr_note++;
    break;
  case 10:
    buzzer_set_period(F4);
    swap_leds(0);
    curr_note++;
    break;
  case 11:
    buzzer_set_period(F4);
    curr_note++;
    break;
  case 12:
    buzzer_set_period(B4);
    swap_leds(1);
    curr_note++;
    break;
  case 13:
    buzzer_set_period(B4);
    curr_note++;
    break;
  case 14:
    buzzer_set_period(A4);
    swap_leds(0);
    curr_note++;
    break;
  case 15:
    buzzer_set_period(A4);
    curr_note++;
    break;
  case 16:
    buzzer_set_period(E4);
    swap_leds(1);
    curr_note++;
    break;
  case 17:
    buzzer_set_period(D4);
    swap_leds(0);
    curr_note++;
    break;
  case 18:
    buzzer_set_period(E4);
    swap_leds(1);
    curr_note++;
    break;
  case 19:
    buzzer_set_period(E4);
    swap_leds(1);
    curr_note++;
    break;
  case 20:
    buzzer_set_period(E4);
    swap_leds(1);
    curr_note++;
    break;
  case 21:
    buzzer_set_period(E4);
    curr_note++;
    break;
  case 23:
    buzzer_set_period(E4);
    curr_note++;
    break;
  case 24:
    buzzer_set_period(E4);
    curr_note++;
  case 25:
    buzzer_set_period(B4);
    swap_leds(0);
    curr_note++;
    break;
  case 26 :
    buzzer_set_period(B4);
    curr_note++;
    break;
  case 27:
    buzzer_set_period(A4);
    swap_leds(1);
    curr_note++;
    break;
  case 28 :
    buzzer_set_period(A4);
    curr_note++;
    break;
  case 29:
    buzzer_set_period(F4);
    swap_leds(0);
    curr_note++;
    break;
  case 30:
    buzzer_set_period(F4);
    curr_note++;
    break;
  case 31:
    buzzer_set_period(B4);
    swap_leds(1);
    curr_note++;
    break;
  case 32:
    buzzer_set_period(B4);
    curr_note++;
    break;
  case 33:
    buzzer_set_period(A4);
    swap_leds(0);
    curr_note++;
    break;
  case 34:
    buzzer_set_period(A4);
    curr_note++;
    break;
  case 35:
    buzzer_set_period(F4);
    swap_leds(1);
    curr_note++;
    break;
  case 36:
    buzzer_set_period(F4);
    curr_note++;
    break;
  case 37:
    buzzer_set_period(B4);
    swap_leds(0);
    curr_note++;
    break;
  case 38:
    buzzer_set_period(B4);
    curr_note++;
    break;
  case 39:
    buzzer_set_period(A4);
    swap_leds(1);
    curr_note++;
    break;
  case 40:
    buzzer_set_period(A4);
    curr_note++;
    break;
  case 41:
    buzzer_set_period(E4);
    swap_leds(0);
    curr_note++;
    break;
  case 42:
    buzzer_set_period(D4);
    swap_leds(1);
    curr_note++;
    break;
  case 43:
    buzzer_set_period(E4);
    swap_leds(0);
    curr_note++;
    break;
  case 44:
    buzzer_set_period(E4);
    curr_note++;
    break;
  case 45:
    buzzer_set_period(E4);
    curr_note++;
    break;
  case 46:
    buzzer_set_period(E4);
    curr_note++;
    break;
  case 47:
    buzzer_set_period(E4);
    curr_note++;
    break;
  case 48:
    buzzer_set_period(E4);
    curr_note++;
    break;
  case 49:
    buzzer_set_period(F4);
    swap_leds(1);
    curr_note++;
    break;
  case 50:
    buzzer_set_period(F4);
    curr_note++;
    break;
  case 51:
    buzzer_set_period(C4);
    swap_leds(0);
    curr_note++;
    break;
  case 52:
    buzzer_set_period(C4);
    curr_note++;
    break;
  case 53:
    buzzer_set_period(B3);
    swap_leds(1);
    curr_note++;
    break;
  case 54:
    buzzer_set_period(B3);
    curr_note++;
    break;
  case 55:
    buzzer_set_period(F4);
    swap_leds(0);
    curr_note++;
    break;
  case 56:
    buzzer_set_period(F4);
    curr_note++;
    break;
  case 57:
    buzzer_set_period(C4);
    swap_leds(1);
    curr_note++;
    break;
  case 58:
    buzzer_set_period(C4);
    curr_note++;
    break;
  case 59:
    buzzer_set_period(B3);
    swap_leds(0);
    curr_note++;
    break;
  case 60:
    buzzer_set_period(B3);
    curr_note++;
    break;
  case 61:
    buzzer_set_period(F4);
    swap_leds(1);
    curr_note++;
    break;
  case 62:
    buzzer_set_period(F4);
    curr_note++;
    break;
  case 63:
    buzzer_set_period(E4);
    swap_leds(0);
    curr_note++;
    break;
  case 64:
    buzzer_set_period(E4);
    curr_note++;
    break;
  case 65:
    buzzer_set_period(B3);
    swap_leds(1);
    curr_note++;
    break;
  case 66:
    buzzer_set_period(A3);
    swap_leds(0);
    curr_note++;
    break;
  case 67:
    buzzer_set_period(B3);
    swap_leds(1);
    curr_note++;
    break;
  case 68:
    buzzer_set_period(B3);
    curr_note++;
    break;
  case 69:
    buzzer_set_period(B3);
    curr_note++;
    break;
  case 70:
    buzzer_set_period(B3);
    curr_note++;
    break;
  case 71:
    buzzer_set_period(B3);
    curr_note++;
    break;
  case 72:
    buzzer_set_period(B3);
    curr_note++;
    break;
  case 73:
    buzzer_set_period(F4);
    swap_leds(0);
    curr_note++;
    break;
  case 74:
    buzzer_set_period(F4);
    curr_note++;
    break;
  case 75:
    buzzer_set_period(C4);
    swap_leds(1);
    curr_note++;
    break;
  case 76:
    buzzer_set_period(B3);
    swap_leds(0);
    curr_note++;
    break;
  case 77:
    buzzer_set_period(B3);
    curr_note++;
    break;
  case 78:
    buzzer_set_period(F4);
    swap_leds(1);
    curr_note++;
    break;
  case 79:
    buzzer_set_period(F4);
    curr_note++;
    break;
  case 80:
    buzzer_set_period(C4);
    swap_leds(0);
    curr_note++;
    break;
  case 81:
    buzzer_set_period(C4);
    curr_note++;
    break;
  case 82:
    buzzer_set_period(B3);
    swap_leds(1);
    curr_note++;
    break;
  case 83:
    buzzer_set_period(B3);
    curr_note++;
    break;
  case 84:
    buzzer_set_period(F4);
    swap_leds(0);
    curr_note++;
    break;
  case 85:
    buzzer_set_period(F4);
    curr_note++;
    break;
  case 86:
    buzzer_set_period(E4);
    swap_leds(1);
    curr_note++;
    break;
  case 87:
    buzzer_set_period(E4);
    curr_note++;
    break;
  case 88:
    buzzer_set_period(B4);
    swap_leds(0);
    curr_note++;
    break;
  case 89:
    buzzer_set_period(B4);
    curr_note++;
    break;
  case 90:
    buzzer_set_period(G4);
    swap_leds(1);
    curr_note++;
    break;
  case 91:
    buzzer_set_period(G4);
    curr_note++;
    break;
  case 92:
    buzzer_set_period(G4);
    curr_note++;
    break;
  case 93:
    buzzer_set_period(G4);
    curr_note++;
    break;
  case 94:
    buzzer_set_period(G4);
    curr_note++;
  case 95:
    buzzer_set_period(G4);
    curr_note++;
    break;
  case 96:
    buzzer_set_period(A4);
    swap_leds(0);
    curr_note++;
    break;
  case 97:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 98:
    buzzer_set_period(A4);
    swap_leds(0);
    curr_note++;
    break;
  case 100:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 101:
    buzzer_set_period(A4);
    swap_leds(0);
    curr_note++;
    break;
  case 103:
    buzzer_set_period(D4);
    swap_leds(1);
    curr_note++;
    break;
  case 104:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 105:
    buzzer_set_period(D4);
    swap_leds(1);
    curr_note++;
    break;
  case 107:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 108:
    buzzer_set_period(D4);
    swap_leds(1);
    curr_note++;
    break;
  case 109:
    buzzer_set_period(G3);
    swap_leds(0);
    curr_note++;
    break;
  case 110:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 111:
    buzzer_set_period(G3);
    swap_leds(0);
    curr_note++;
    break;
  case 112:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 113:
    buzzer_set_period(G3);
    swap_leds(0);
    curr_note++;
    break;
  case 114:
    buzzer_set_period(C4);
    swap_leds(1);
    curr_note++;
    break;
  case 115:
    buzzer_set_period(C4);
    curr_note++;
    break;
  case 116:
    buzzer_set_period(G3);
    swap_leds(0);
    curr_note++;
    break;
  case 117:
    buzzer_set_period(G3);
    curr_note++;
    break;
  case 118:
    buzzer_set_period(G3);
    swap_leds(0);
    curr_note++;
    break;
  case 119:
    buzzer_set_period(G3);
    curr_note++;
    break;
  case 120:
    buzzer_set_period(F3);
    swap_leds(1);
    curr_note++;
    break;
  case 121:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 122:
    buzzer_set_period(F3);
    swap_leds(1);
    curr_note++;
    break;
  case 123:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 124:
    buzzer_set_period(F3);
    swap_leds(1);
    curr_note++;
    break;
  case 125:
    buzzer_set_period(B4_FLAT);
    swap_leds(0);
    curr_note++;
    break;
  case 127:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 128:
    buzzer_set_period(B4_FLAT);
    curr_note++;
    break;
  case 129:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 130:
    buzzer_set_period(B4_FLAT);
    swap_leds(0);
    curr_note++;
    break;
  case 131:
    buzzer_set_period(E3);
    swap_leds(1);
    curr_note++;
    break;
  case 132:
    buzzer_set_period(E3);
    curr_note++;
    break;
  case 133:
    buzzer_set_period(D3);
    swap_leds(0);
    curr_note++;
    break;
  case 134:
    buzzer_set_period(D3);
    curr_note++;
    break;
  case 135:
    buzzer_set_period(A4);
    swap_leds(1);
    curr_note++;
    break;
  case 136:
    buzzer_set_period(A4);
    curr_note++;
    break;
  case 137:
    buzzer_set_period(E3);
    swap_leds(0);
    curr_note++;
    break;
  case 138:
    buzzer_set_period(E3);
    curr_note++;
    break;
  case 139:
    buzzer_set_period(E3);
    swap_leds(0);
    curr_note++;
    break;
  case 140:
    buzzer_set_period(E3);
    curr_note++;
    break;
  case 141:
    buzzer_set_period(E3);
    swap_leds(0);
    curr_note++;
    break;
  case 142:
    buzzer_set_period(E3);
    curr_note++;
    break;
  case 143:
    buzzer_set_period(A4);
    swap_leds(1);
    curr_note++;
    break;
  case 144:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 145:
    buzzer_set_period(A4);
    swap_leds(1);
    curr_note++;
    break;
  case 146:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 147:
    buzzer_set_period(A4);
    swap_leds(1);
    curr_note++;
    break;
  case 148:
    buzzer_set_period(D4);
    swap_leds(0);
    curr_note++;
    break;
  case 149:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 150:
    buzzer_set_period(D4);
    swap_leds(0);
    curr_note++;
    break;
  case 151:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 152:
    buzzer_set_period(D4);
    swap_leds(0);
    curr_note++;
    break;
  case 153:
    buzzer_set_period(G3);
    swap_leds(1);
    curr_note++;
    break;
  case 154:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 155:
    buzzer_set_period(G3);
    swap_leds(1);
    curr_note++;
    break;
  case 156:
    buzzer_set_period(0);
    leds_on(0);
    curr_note++;
    break;
  case 157:
    buzzer_set_period(G3);
    swap_leds(1);
    curr_note++;
    break;
  case 158:
    buzzer_set_period(C4);
    swap_leds(0);
    curr_note++;
    break;
  case 159:
    buzzer_set_period(C4);
    swap_leds(0);
    curr_note++;
    break;
  case 160:
    buzzer_set_period(G3);
    swap_leds(1);
    curr_note++;
    break;
  case 161:
    buzzer_set_period(G3);
    curr_note++;
    break;
  case 162:
    buzzer_set_period(G3);
    swap_leds(1);
    curr_note++;
    break;
  case 163:
    buzzer_set_period(G3);
    curr_note++;
    break;
  case 164:
    buzzer_set_period(F3);
    swap_leds(0);
    curr_note++;
    break;
  case 165:
    buzzer_set_period(F3);
    curr_note++;
    break;
  case 166:
    buzzer_set_period(G3);
    swap_leds(1);
    curr_note++;
    break;
  case 167:
    buzzer_set_period(G3);
    curr_note++;
    break;
  case 168:
    buzzer_set_period(A4);
    swap_leds(0);
    curr_note++;
    break;
  case 169:
    buzzer_set_period(A4);
    curr_note++;
    break;
  case 170:
    buzzer_set_period(B4_FLAT);
    swap_leds(1);
    curr_note++;
    break;
  case 171:
    buzzer_set_period(B4_FLAT);
    curr_note++;
    break;
  case 172:
    buzzer_set_period(C4);
    swap_leds(0);
    curr_note++;
    break;
  case 173:
    buzzer_set_period(C4);
    curr_note++;
    break;
  case 174:
    buzzer_set_period(D4);
    swap_leds(1);
    curr_note++;
    break;
  case 175:
    buzzer_set_period(D4);
    curr_note++;
    break;
  case 176:
    buzzer_set_period(A4);
    swap_leds(0);
    curr_note++;
    break;
  case 177:
    buzzer_set_period(A4);
    curr_note++;
    break;
  case 178:
    buzzer_set_period(B4);
    swap_leds(1);
    curr_note++;
    break;
  case 179:
    buzzer_set_period(B4);
    curr_note++;
    break;
  case 180:
    buzzer_set_period(D4);
    swap_leds(0);
    curr_note++;
    break;
  case 181:
    buzzer_set_period(D4);
    curr_note++;
    break;
  case 182:
    buzzer_set_period(E5);
    swap_leds(1);
    curr_note++;
    break;
  case 183:
    buzzer_set_period(E5);
    curr_note++;
    break;
  case 184:
    buzzer_set_period(E5);
    swap_leds(1);
    curr_note++;
    break;
  case 185:
    buzzer_set_period(E5);
    curr_note++;
    break;
  case 186:
    buzzer_set_period(0);
    leds_on(0);
    curr_note = 0;
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
void play_off()
{
  buzzer_set_period(0);
  leds_on(0);
  static char curr_note =0;
}
  
