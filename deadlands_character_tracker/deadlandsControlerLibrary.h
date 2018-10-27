/*
  deadlandsControlerLibrary.h - Library for controling the
  Deadlands Enemy/Player Tracker.
  Created by Jonathan Hagler, October 21, 2018
*/

#ifndef dcl_h
#define dcl_h
#include "LedControl.h"
#if (ARDUINO >= 100)
#include <Arduino.h>
#else
#include <WProgram.h>
#endif

class Character {
  public:
    Character();
    void addWound();
    void kill();
    void staggered();
    void addFatigue();
    void setWildCard();
    void setToughness();
    void setParry();
    byte getToughness();
    byte getParry();
    byte getStatus();
    byte getWounds();
    byte getStaggeredByte();
    byte getFatigue();
    byte getWildCardByte();
    byte getDeadByte();
  private:
    byte _wounds;
    byte _fatigue;
    bool _staggered;
    byte _staggeredByte;
    bool _wildCard;
    byte _wildCardByte;
    bool _dead;
    byte _deadByte;
    bool _deadFromWound;
    bool _deadFromFatigue;
    int _toughness;
    int _parry;
    byte _status;
};

#endif
