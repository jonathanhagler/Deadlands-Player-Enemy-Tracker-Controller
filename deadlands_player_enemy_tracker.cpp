dcl::Character(int enemyID, bool wildCard) {
  _id = enemyID;
  _wildCard = wildCard;
}
void dcl::setEnemyStatus() {

}
void dcl::addWound() {
  if (_wounds & B01110000 = B00000000) {
    _wounds = B00010000;
  }
  else if (_wounds & B01110000 = B00010000) {
    _wounds = B00110000;
  }
  else if (_wounds & B0111000 = B00110000) {
    _wounds = B01110000;
  }
  else if (_wounds & B0111000 = B01110000) {
    _deadFromWound = true;
    kill();
  }
  else if (_deadFromWound) {
    _wounds = B00000000;
    _dead = B00000000;
  }
}
void dcl::kill() {
  _dead = B00001000;
}
void dcl::staggered() {
  if (_staggered) {
    _staggered = false;
  }
  else {
    _staggered = true;
  }
}
void dcl::addFatigue() {
  if (_fatigue & B00000110 = B00000000) {
    _fatigue = B00000010;
  }
  else if (_fatigue & B00000110 = B00000010) {
    _fatigue = B00000110;
  }
  else if (_fatigue & B00000110 = B00000110) {
    _deadFromFatigue = true;
    kill();
  }
  else if (_deadFromFatigue) {
    _fatige = B00000000;
    _dead = B00000000;
  }
}
void dcl::setWildCard() {
  _wildCard = true;
}
void dcl::setToughness(){

}
void dcl::setParry() {

}
byte dcl::getToughness() {

}
byte dcl::getParry() {

}
byte dcl::getStatus() {

}
