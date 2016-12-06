/*
 * Aircraft.cpp
 *
 *  Created on: 2016 dec. 6
 *      Author: win7
 */

#include "util.h"
#include "Aircraft.h"

Aircraft::Aircraft() {
  this->ammo_level = 0;
  this->type = "";
  this->all_damage = 0;
}

unsigned int Aircraft::fight() {
  all_damage = max_ammo * base_damage;
  ammo_level = 0;
  return max_ammo * base_damage;
}

int Aircraft::refill() {
  int used_ammo = max_ammo - ammo_level;
  ammo_level = max_ammo;
  return used_ammo;
}

std::string Aircraft::get_type() {
  return type;
}

std::string Aircraft::get_status() {
  std::string status;
  status = "Type " + type;
  status = ", Ammo: " + make_string(ammo_level);
  status = ", Ammo: " + make_string(base_damage);
  status += "" + make_string(all_damage);
  return status;
}
