#include "deadlandsControlerLibrary.h"

static byte sevenSegmentNumbers[11] = {B00111111,B00000110,B01011011,
                                       B01001111,B01100110,B01101101,
                                       B01111101,B00000111,B01111111,
                                       B01101111,B00000000}; // digits
                                       // coorispond to the array index
                                       // with 11 being all off
Character enemy1(1,true);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Enemy 1 Staggard: ");
  Serial.print(enemy1.getStaggeredByte(),BIN);
  Serial.print("\n");
  Serial.print("Enemy 1 Wounds: ");
  Serial.print(enemy1.getWounds(),BIN);
  Serial.print("\n");
  Serial.print("Enemy 1 Death: ");
  Serial.print(enemy1.getDeadByte(),BIN);
  Serial.print("\n");
  Serial.print("Enemy 1 Fatigue: ");
  Serial.print(enemy1.getFatigue(),BIN);
  Serial.print("\n");
  Serial.print("Enemy 1 Wild Card: ");
  Serial.print(enemy1.getWildCardByte(),BIN);
  Serial.print("\n");
  Serial.print("Enemy 1 Status: ");
  Serial.print(enemy1.getStatus(),BIN);
  Serial.print("\n");
  delay(10000);
  }
