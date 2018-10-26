#include "deadlandsControlerLibrary.h"
#include "Arduino.h"

const int numberOfEnemies = 8;
const int numberOfPlayers = 8;
bool instantiationComplete = false;
Character enemies[numberOfEnemies];
Character players[numberOfPlayers];

static byte sevenSegmentNumbers[11] = {B00111111,B00000110,B01011011,
                                       B01001111,B01100110,B01101101,
                                       B01111101,B00000111,B01111111,
                                       B01101111,B00000000}; // digits
                                       // coorispond to the array index
                                       // with 11 being all off
                                       
void setup() {
  Serial.begin(9600);
}

void loop() {
  if (instantiationComplete){
    for (int x = 0; x < numberOfEnemies; x++){
        enemies[x] = Character();
    }
    for (int x = 0; x < numberOfPlayers; x++){
        players[x] = Character();
    }
    instantiationComplete = true;
  }

  enemies[0].addWound();
  enemies[0].staggered();
  enemies[1].addFatigue();
  enemies[2].kill();
  

  for (int x = 0; x <= 2; x++){
    Serial.print("Enemy ");
    Serial.print(x);
    Serial.print( " Status: ");
    Serial.print(enemies[x].getStatus(),BIN);
    Serial.print("\n");
    Serial.print("\n");
    Serial.print("\n");
  }
  delay(5000);
}
