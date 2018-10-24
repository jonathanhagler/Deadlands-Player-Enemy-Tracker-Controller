static byte sevenSegmentNumbers[11] = {B00111111,B00000110,B01011011,B01001111,B01100110,B01101101,B01111101,B00000111,B01111111,B01101111,B00000000}; // digits coorispond to the array index with 11 being all off
volatile byte enemyStatus[8] = {B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
volatile byte playerStatus[8] = {B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000,B00000000};
volatile byte enemy1Status = enemyStatus[0];
volatile byte enemy2Status = enemyStatus[1];
volatile byte enemy3Status  = enemyStatus[2];
volatile byte enemy4Status  = enemyStatus[3];
volatile byte enemy5Status  = enemyStatus[4];
volatile byte enemy6Status  = enemyStatus[5];
volatile byte enemy7Status  = enemyStatus[6];
volatile byte enemy8Status  = enemyStatus[7];
volatile byte player1Status = playerStatus[0];
volatile byte player2Status = playerStatus[0];
volatile byte player3Status = playerStatus[0];
volatile byte player4Status = playerStatus[0];
volatile byte player5Status = playerStatus[0];
volatile byte player6Status = playerStatus[0];
volatile byte player7Status = playerStatus[0];
volatile byte player8Status = playerStatus[0];


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
