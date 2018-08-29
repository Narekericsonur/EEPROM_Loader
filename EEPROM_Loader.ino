#include <EEPROM.h>

#define ledPin A3; // Double check that LED is this one on board


void setup(){
    pinMode(ledPin, OUTPUT);
}

void loop(){

}

/*
Previous Code to take waypoints from SD card
void Waypoint::extractWaypoints()
{
  file = SD.open("wp.hex");
  file.seek(3);
  int j = 0;
  Coord wp;
  int32_t x;
  int16_t y;
  while (file.available())
  {
    x = 0x0;
    for (int i = 0; i < 4; i++)
    {
      x = x << 8 | file.read();
    }
    wp.lat = x;
    x = 0x0;
    for (int i = 0; i < 4; i++)
    {
      x = x << 8 | file.read();
    }
    wp.lng = x;
    y = 0x0;
    for (int i = 0; i < 2; i++)
    {
      y = y << 8 | file.read();
    }
    wp.alt = y;
    EEPROM.put(j * sizeof(wp), wp);
    j++;
  }
  numofwaypoints_ = j;
  file.close();
}
*/