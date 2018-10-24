#include "deadlandsControlerLibrary.h"

Character::Character(int enemyID, bool wildCard) {
  _id = enemyID;
  _wildCard = wildCard;
  _wounds = B00010000;
  _fatigue = B00000010;
  _staggered = true;
  _dead = true;
  _deadFromWound = false;
  _deadFromFatigue = false;
  _toughness = B00000000;
  _parry = B00000000;
  _status = B00000000;
  if (_dead){
    _deadByte = B00001000;
  }
  else {
    _deadByte = B00000000;
  }
  if (_staggered){
    _staggeredByte = B10000000;
  }
  else {
    _staggeredByte = B00000000;
  }
  if (_wildCard){
    _wildCardByte = B00000001;
  }
  else {
    _wildCardByte = B00000000;
  }
}
void Character::addWound() {
  byte _woundResult = _wounds & B01110000;
  if (_woundResult = B00000000) {
    _wounds = B00010000;
  }
  else if (_woundResult = B00010000) {
    _wounds = B00110000;
  }
  else if (_woundResult = B00110000) {
    _wounds = B01110000;
  }
  else if (_woundResult = B01110000) {
    _deadFromWound = true;
    kill();
  }
  else if (_deadFromWound) {
    _wounds = B00000000;
    _deadByte = B00000000;
  }
}
void Character::kill() {
  _deadByte = B00001000;
}
void Character::staggered() {
  if (_staggered) {
    _staggered = false;
  }
  else {
    _staggered = true;
  }
}
void Character::addFatigue() {
  byte _fatigueResult = _fatigue & B00000110;
  if (_fatigueResult = B00000000) {
    _fatigue = B00000010;
  }
  else if (_fatigueResult = B00000010) {
    _fatigue = B00000110;
  }
  else if (_fatigueResult = B00000110) {
    _deadFromFatigue = true;
    kill();
  }
  else if (_deadFromFatigue) {
    _fatigue = B00000000;
    _deadByte = B00000000;
  }
}
void Character::setWildCard() {
  _wildCard = true;
}
void Character::setToughness(){

}
void Character::setParry() {

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
