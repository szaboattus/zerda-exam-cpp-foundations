/*
 * Aircraft.h
 *
 *  Created on: 2016 dec. 6
 *      Author: win7
 */

#ifndef AIRCRAFT_H_
#define AIRCRAFT_H_
#include <iostream>

class Aircraft {
private:
  unsigned int ammo_level;
  unsigned int all_damage;
protected:
  unsigned int max_ammo;
  unsigned int base_damage;
  std::string type = "";
public:
  Aircraft();
  unsigned int fight();
  //int refill(unsigned int &ammo) throw (const char*);
  std::string get_type();
  std::string get_status();
  unsigned int get_all_damage();
};

#endif /* AIRCRAFT_H_ */
