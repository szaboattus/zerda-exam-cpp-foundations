#include <sstream>
#include "util.h"

using namespace std;

string make_string(int integer) {
  stringstream ss;
  ss << integer;
  return ss.str();
}
