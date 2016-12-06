/*
 * Carrier.cpp
 *
 *  Created on: 2016 dec. 6
 *      Author: win7
 */

#include "util.h"
#include "Carrier.h"
#include "F16.h"
#include "F35.h"

Carrier::Carrier() {

}

Carrier::~Carrier() {
}

Carrier::Carrier(std::string name, unsigned int health, unsigned int ammo) {
  this->carrier_name = name;
  this->aircraft_counter = 0;
  this->hp = health;
  this->storage_ammo = ammo;
}

int Carrier::add_aircraft(std::string type_of_aircraft){
  if (type_of_aircraft == "F16") {
    aircraft_garage.push_back(new F16);
    aircraft_counter++;
    return 1;
  }
  else if (type_of_aircraft == "F35") {
    aircraft_garage.push_back(new F35);
    aircraft_counter++;
    return 1;
  }
  else {
    throw 0;
  }
}

int Carrier::total_damage() {
  unsigned int total;
  for (unsigned int i = 0; i < aircraft_counter; i++) {
     total += aircraft_garage[i]->get_all_damage();
  }
  return total;
}

std::string Carrier::planes_statuses() {
  std::string status = "";
  for (unsigned int i = 0; i < aircraft_counter; i++) {
    status += aircraft_garage[i]->get_status() + "\n";
  }
  return status;
}

std::string Carrier::carrier_status() {
  std::string carrier_status = carrier_name;
  carrier_status += ", Aircraft count: " + make_string(aircraft_counter);
  carrier_status += ", Ammo storage: " + make_string(storage_ammo);
  carrier_status += ", All damage: " + make_string(total_damage()) + "\n";
  carrier_status += "Aircrafts: \n";
  carrier_status += planes_statuses();
  return carrier_status;
}

void Carrier::fight(Carrier &carrier) {
  unsigned int alldmg;
  for (unsigned int i = 0; i < aircraft_counter; i++) {
    alldmg += aircraft_garage[i]->get_all_damage();
    aircraft_garage[i]->fight();
  }
  carrier.hp = carrier.hp - alldmg;
}
