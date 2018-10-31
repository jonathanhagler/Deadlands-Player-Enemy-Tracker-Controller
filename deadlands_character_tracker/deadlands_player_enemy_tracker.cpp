#include "deadlandsControlerLibrary.h"

Character::Character() {
  _wildCard = false;
  _wounds = 0b0;
  _fatigue = 0b0;
  _staggered = false;
  _dead = false;
  _deadFromWound = false;
  _deadFromFatigue = false;
  _toughness = 0;
  _parry = 0;
  _status = 0b0;
}
void Character::addWound() {
  byte _woundResult = _wounds & 0b1110000;
  if (_wildCard) {
    if (_deadFromWound) {
      _wounds = 0b0;
      _deadByte = 0b0;
      _deadFromWound = false;
    }
    else if (_woundResult == 0b0) {
      _wounds = 0b10000;
    }
    else if (_woundResult == 0b10000) {
      _wounds = 0b110000;
    }
    else if (_woundResult == 0b110000) {
      _wounds = 0b1110000;
    }
    else if (_woundResult == 0b1110000) {
      _deadFromWound = true;
      kill();
    }
  } else {
    if (_deadFromWound) {
      _wounds = 0b0;
      _deadByte = 0b0;
      _deadFromWound = false;
    }
    else if (_woundResult == 0b0) {
      _wounds = 0b10000;
    }
    else if (_woundResult == 0b10000) {
      _deadFromWound = true;
      kill();
    }
  }
}
void Character::kill() {
  _deadByte = 0b1000;
}
void Character::staggered() {
  if (_staggered) {
    _staggered = false;
    _staggeredByte = 0b0;
  }
  else {
    _staggered = true;
    _staggeredByte = 0b10000000;
  }
}
void Character::addFatigue() {
  byte _fatigueResult = _fatigue & 0b110;
  if (_deadFromFatigue) {
    _fatigue = 0b0;
    _deadByte = 0b0;
    _deadFromFatigue = false;
  }
  else if (_fatigueResult == 0b0) {
    _fatigue = 0b10;
  }
  else if (_fatigueResult == 0b10) {
    _fatigue = 0b110;
  }
  else if (_fatigueResult == 0b110) {
    _deadFromFatigue = true;
    kill();
  }
}
void Character::setWildCard() {
  if (_wildCard) {
    _wildCard = false;
    _wildCardByte = 0b0;
  }
  else {
    _wildCard = true;
    _wildCardByte = 0b1;
  }
}
void Character::setToughness(int toughnessRating){
  _toughness = toughnessRating;
}
void Character::setParry(int parryRating) {
  _parry = parryRating;
}
byte Character::getToughness() {
  return _toughness;
}
byte Character::getParry() {
  return _parry;
}
byte Character::getStatus() {
  if (_wildCard) {
    _wildCardByte = 0b1;
  } else {
    _wildCardByte = 0b0;
  }
  _status = _staggeredByte + _wounds + _deadByte + _fatigue + _wildCardByte;
  return _status;
}
byte Character::getWounds() {
  return _wounds;
}
byte Character::getStaggeredByte(){
  return _staggeredByte;
}
byte Character::getFatigue(){
  return _fatigue;
}
byte Character::getWildCardByte(){
  return _wildCardByte;
}
byte Character::getDeadByte(){
  return _deadByte;
}
