/*
  deadlandsControlerLibrary.h - Library for controling the
  Deadlands Enemy/Player Tracker.
  Created by Jonathan Hagler, October 21, 2018
*/
#ifndef deadlandsControlerLibrary_h
#define deadlandsControlerLibrary_h

#include "Arduino.h"

class Enemy
{
  public:
    int number = 0;
    byte wounds = B000;
    byte fatigue = B00;
    int shaken = B0;
    int wildCard = B0;
};

#endifdcx x vcbvcv vvv
