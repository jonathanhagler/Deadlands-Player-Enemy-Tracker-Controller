#include "deadlandsControlerLibrary.h"

const int numberOfEnemies = 8;
const int numberOfPlayers = 8;
bool instantiationComplete = false;
Character enemies[numberOfEnemies];
Character players[numberOfPlayers];
LedControl chip1(13);
LedControl chip2(14);
LedControl chip3(15);
bool firstRun = true;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (firstRun) {
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
  enemies[0].setWildCard();
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
