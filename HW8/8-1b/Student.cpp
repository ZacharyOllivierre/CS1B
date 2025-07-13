#include "Student.h"
#include <iostream>

// Default Constructor - sets values to 0
Student::Student() {
    this->id = 0;
    this->name = "";
    this->units = 0;
}

// Parameterized Constructor
Student::Student(int id, int units, std::string name) {
    this->id = id;
    this->name = name;
    this->units = units;
}

// Destructor
Student::~Student() {
    std::cout << "\nCalling Student Deconstructor\n";
}

// Returns id
int Student::getId() const {
    return id;
}

// Returns units
int Student::getUnits() const {
    return units;
}