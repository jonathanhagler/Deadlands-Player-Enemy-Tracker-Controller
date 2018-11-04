#include "deadlandsControlerLibrary.h"

// *********** Deadlands Variables ***********
const int numberOfEnemies = 8;
const int numberOfPlayers = 8;
Character enemies[numberOfEnemies];
Character players[numberOfPlayers];
const int characterChipInfo[8][3] = {{1,0,1},{1,2,3},{1,4,5},{1,6,7},
                                     {2,0,1},{2,2,3},{2,4,5},{2,6,7}};
// *********** End Deadlands Variables ***********

// *********** LedControl Library Variables ***********
LedControl chip1(13);
LedControl chip2(14);
LedControl chip3(15);
// *********** End LEDControl LIbrary Variables ***********


bool firstRun = true;
bool instantiationComplete = false;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (firstRun) {
    enemies[0].setWildCard();
    for (int x = 0; x <= 2; x++){
      Serial.print("Enemy ");
      Serial.print(x);
      Serial.print( " Status: ");
      Serial.print(enemies[x].getStatus(),BIN);
      Serial.print("\n");
      Serial.print("\n");
      Serial.print("\n");
    }
    firstRun = false;
    delay(5000);
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

// *********** Functions ***********
//
void selectEnemy(){
  // This funtion will be called when an interupt event is detected.
  // Using a rotary encoder, select the number referring to the
  // enemy. Set that number equal to "selectedEnemy"
}
void selectPlayer(){
  // This funtion will be called when an interupt event is detected.
  // Using a rotary encoder, select the number referring to the
  // enemy. Set that number equal to "selectedEnemy"
}
void setEnemyToughtness() {
  // This funtion will be called when an interupt event is detected.
  // Using a rotary encoder, select the toughness from 0-9. Set that number
  // to the variable "toughnessRating". Use character method to apply the
  // property to the slected enemy.
  //  enemies[selectedEnemy].setToughness(toughnessRating)
}
void setPlayerToughness() {
  // This funtion will be called when an interupt event is detected.
  // Using a rotary encoder, select the toughness from 0-9. Set that number
  // to the variable "toughnessRating". Use character method to apply the
  // property to the slected player.
  //  player[selectedPlayer].setToughness(toughnessRating)
}
void setEnemyParry() {
  // This funtion will be called when an interupt event is detected.
  // Using a rotary encoder, select the toughness from 0-9. Set that number
  // to the variable "parryRating". Use character method to apply the
  // property to the slected enemy.
  //  enemies[selectedEnemy].setParry(parryRating)
}
void setPlayerParry() {
  // This funtion will be called when an interupt event is detected.
  // Using a rotary encoder, select the toughness from 0-9. Set that number
  // to the variable "parryRating". Use character method to apply the
  // property to the slected player.
  //  player[selectedPlayer].setParry(parryRating)
}
void displayEnemyParry(int selectedEnemy) {
  // This will be called as part of the main loop.
  // Check to see if the enemy toughness has changed. If it has, send to
  // the display.
}
void displayPlayerParry(int selectedPlayer) {
  // This will be called as part of the main loop.
  // Check to see if the enemy toughness has changed. If it has, send to
  // the display.
}
