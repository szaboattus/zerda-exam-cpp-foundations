/*
 * Aircraft.h
 *
 *  Created on: 2016 dec. 6
 *      Author: win7
 */

#ifndef AIRCRAFT_H_
#define AIRCRAFT_H_

class Aircraft {
private:
  unsigned int ammo_level;
  unsigned int all_damage;
  std::string type = "";
protected:
  unsigned int max_ammo;
  unsigned int base_damage;
public:
  Aircraft();
  unsigned int fight();
  int refill();
  std::string get_type();
  std::string get_status();
};

#endif /* AIRCRAFT_H_ */
