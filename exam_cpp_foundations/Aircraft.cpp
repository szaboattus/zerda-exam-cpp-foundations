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
  ammo_level = 0;
  return max_ammo * base_damage;
}

std::string Aircraft::get_type() {
  return type;
}

unsigned int Aircraft::get_all_damage() {
  return ammo_level * base_damage;
}

std::string Aircraft::get_status() {
  std::string status;
  status = "Type: " + type;
  status += ", Ammo: " + make_string(ammo_level);
  status += ", Ammo: " + make_string(base_damage);
  status += ", All damage: " + make_string(get_all_damage());
  return status;
}
