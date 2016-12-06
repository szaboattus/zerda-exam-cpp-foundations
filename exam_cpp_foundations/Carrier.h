/*
 * Carrier.h
 *
 *  Created on: 2016 dec. 6
 *      Author: win7
 */

#ifndef CARRIER_H_
#define CARRIER_H_
#include <vector>
#include "Aircraft.h"

class Carrier {
private:
  std::string carrier_name;
  unsigned int hp;
  unsigned int storage_ammo;
  unsigned int aircraft_counter;
  std::vector <Aircraft*> aircraft_garage;
public:
  Carrier();
  ~Carrier();
  Carrier(std::string carrier_name, unsigned int health, unsigned int ammo);
  int add_aircraft(std::string type_of_aircraft);
  std::string carrier_status();
  int total_damage();
  std::string planes_statuses();
  void fight(Carrier &carrier);
};

#endif /* CARRIER_H_ */
