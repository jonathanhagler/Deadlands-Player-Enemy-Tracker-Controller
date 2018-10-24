# Deadlands-Player-Enemy-Tracker-Controller

Notes

3 bytes per Character
  1 Toughness byte
  1 Parry byte
  1 Status byte

Each time through the loop the character bytes will be checked against the
previous values and if a change is detected the new data will be sent to the
display
