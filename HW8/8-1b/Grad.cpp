#include "Grad.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Parameterized Constructor
Grad::Grad(int id, int units, string name, string degree) {
    
    // Set Values
    this->id = id;
    this->name = name;
    this->units = units;
    this->degree = degree;
}

// Deconstructor
Grad::~Grad() {
    cout << "\nCalling Grad deconstructor\n";
}

// Display Function
void Grad::displayRecord() {
    int spacing = 10;

    // Display Record
    cout << endl << left;
    cout << setw(spacing) << "ID:" << id << endl;
    cout << setw(spacing) << "Name:" << name << endl;
    cout << setw(spacing) << "Units:" << units << endl;
    cout << setw(spacing) << "Degree:" << degree << endl;
}

// Set Id - From base class
void Grad::setId(int id) {
    this->id = id;
}

// Set Units - From base class
void Grad::setUnits(int units) {
    this->units = units;
}
