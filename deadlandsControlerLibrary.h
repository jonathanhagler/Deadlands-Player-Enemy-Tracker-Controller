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

class Character {
  public:
    Character(int enemyID);
    void addWound();
    void kill();
    void addFatigue();
    void setWildCard();
    void setToughness();
    void setParry();
    byte getToughness();
    byte getParry();
    byte getStatus();
  private:
    void setEnemyStatus(byte status = B00000000);
    byte _wounds;
    byte _fatigue;
    byte _dead;
    byte _toughness;
    byte _parry;
    byte _status;
    byte _id;
};
#endif
