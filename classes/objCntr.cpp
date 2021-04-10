// Objects Counter

#include <iostream>
#include "../headers/objCntr.h"

using namespace std;

int objCntr::cntr = 0;
objCntr::objCntr() {
    cout << "++ construction: now there is " << ++cntr << " objects\n";
}
objCntr::~objCntr() {
    cout << "-- destruction: now there is " << --cntr << " objects\n";
}