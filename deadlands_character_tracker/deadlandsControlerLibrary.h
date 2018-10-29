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
    void setToughness(int toughnessRating);
    void setParry(int parryRating);
    uint8_t getToughness();
    uint8_t getParry();
    uint8_t getStatus();
    uint8_t getWounds();
    uint8_t getStaggeredByte();
    uint8_t getFatigue();
    uint8_t getWildCardByte();
    uint8_t getDeadByte();
  private:
    uint8_t _wounds;
    uint8_t _fatigue;
    bool _staggered;
    uint8_t _staggeredByte;
    bool _wildCard;
    uint8_t _wildCardByte;
    bool _dead;
    uint8_t _deadByte;
    bool _deadFromWound;
    bool _deadFromFatigue;
    int _toughness;
    int _parry;
    uint8_t _status;
};

#endif
