#include "deadlandsControlerLibrary.h"

Character::Character() {
  _wildCard = false;
  _wounds = B00000000;
  _fatigue = B00000000;
  _staggered = false;
  _dead = false;
  _deadFromWound = false;
  _deadFromFatigue = false;
  _toughness = 0;
  _parry = 0;
  _status = B00000000;
}
void Character::addWound() {
  byte _woundResult = _wounds & B01110000;
  if (_deadFromWound) {
    _wounds = B00000000;
    _deadByte = B00000000;
    _deadFromWound = false;
  }
  else if (_woundResult == B00000000) {
    _wounds = B00010000;
  }
  else if (_woundResult == B00010000) {
    _wounds = B00110000;
  }
  else if (_woundResult == B00110000) {
    _wounds = B01110000;
  }
  else if (_woundResult == B01110000) {
    _deadFromWound = true;
    kill();
  }
}
void Character::kill() {
  _deadByte = B00001000;
}
void Character::staggered() {
  if (_staggered) {
    _staggered = false;
    _staggeredByte = B00000000;
  }
  else {
    _staggered = true;
    _staggeredByte = B10000000;
  }
}
void Character::addFatigue() {
  byte _fatigueResult = _fatigue & B00000110;
  if (_deadFromFatigue) {
    _fatigue = B00000000;
    _deadByte = B00000000;
    _deadFromFatigue = false;
  }
  else if (_fatigueResult == B00000000) {
    _fatigue = B00000010;
  }
  else if (_fatigueResult == B00000010) {
    _fatigue = B00000110;
  }
  else if (_fatigueResult == B00000110) {
    _deadFromFatigue = true;
    kill();
  }
}
void Character::setWildCard() {
  if (_wildCard) {
    _wildCard = false;
    _wildCardByte = B00000000;
  }
  else {
    _wildCard = true;
    _wildCardByte = B00000001;
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
