/*
  deadlandsControlerLibrary.h - Library for controling the
  Deadlands Enemy/Player Tracker.
  Created by Jonathan Hagler, October 21, 2018
*/

#ifndef dcl
#define dcl
#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class Enemy {
  public:
    Enemy(int enemyID);
    byte setEnemyStatus();
    byte wound();
    byte kill();
    byte fatigue();
    byte setWildCard();
    byte setToughness();
    byte setParry();
    byte getToughness();
    byte getParry();
    byte getStatus();
  private:
};

class Player {
  public:
    Enemy(int enemyID);
    byte setEnemyStatus();
    byte wound();
    byte kill();
    byte fatigue();
    byte setWildCard();
    byte setToughness();
    byte setParry();
    byte getToughness();
    byte getParry();
    byte getStatus();
  private:
};
#endif
