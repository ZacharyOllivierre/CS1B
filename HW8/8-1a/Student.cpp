#include "Student.h"
#include <iostream>
#include <iomanip>

// Default Constructor - Sets values to 0
Student::Student() {
    
    // Set default values
    id = 0;
    name = " ";
    units = 0;
}

// Parameterized Constructor
Student::Student(int id, string name, int units) {
    
    // Set values
    this->id = id;
    this->name = name;
    this->units = units;
}

// Destructor - does nothing 
Student::~Student() {}

// Set Value Functions
void Student::setID(int id) {
    this->id = id;
}
void Student::setName(string name) {
    this->name = name;
}
void Student::setUnits(int units) {
    this->units = units;
}

// Display Function - Displays ID, Name, and Units
void Student::displayRecord() {
    int spacing = 7;

    // Display
    cout << endl << left;
    cout << setw(spacing) << "ID:" << id << endl;
    cout << setw(spacing) << "Name:" << name << endl;
    cout << setw(spacing) << "Units:" << units << endl;
}
    



