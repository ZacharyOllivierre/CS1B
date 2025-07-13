#include "UnderGrad.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Parameterized Constructor
UnderGrad::UnderGrad(int id, int units, string name, string level) {
    this->id = id;
    this->name = name;
    this->units = units;
    this->level = level;
}

// Destructor
UnderGrad::~UnderGrad() {
    cout << "\nCalling UnderGrad Destructor\n";
}

// Display Record to user
void UnderGrad::displayRecord() {
    int spacing = 10;

    // Display Record
    cout << endl << left;
    cout << setw(spacing) << "ID:" << id << endl;
    cout << setw(spacing) << "Name:" << name << endl;
    cout << setw(spacing) << "Units:" << units << endl;
    cout << setw(spacing) << "Level:" << level << endl;
}

// Set id - from base class
void UnderGrad::setId(int id) {
    this->id = id;
}

// Set units - from base class
void UnderGrad::setUnits(int units) {
    this->units = units;
}