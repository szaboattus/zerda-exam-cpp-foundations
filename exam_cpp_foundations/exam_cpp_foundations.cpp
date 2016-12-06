//============================================================================
// Name        : exam_cpp_foundations.cpp
// Author      : Programming first
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "F16.h"
#include "F35.h"
#include "Carrier.h"
using namespace std;

int main() {
  Carrier uss_reagen("uss_reagen",1000,5000);
  Carrier kuznetsov("kuznetsov",800,4000);
  uss_reagen.add_aircraft("F16");
  kuznetsov.add_aircraft("F35");

  cout << uss_reagen.carrier_status() << endl;
  cout << kuznetsov.carrier_status() << endl;

  kuznetsov.fight(uss_reagen);

  cout << uss_reagen.carrier_status() << endl;
  cout << kuznetsov.carrier_status() << endl;

  return 0;
}
