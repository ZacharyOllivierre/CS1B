// =============================================================================
// Attached: HW_8-1b
// File: HW_8.1a.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Inheritance Continuation
// =============================================================================
// Description:
// This program declare two objects of type underGrad and grad. They are both
// displayed using their displayRecord function. The object grad is then changed
// and displayed again.
// =============================================================================

#include <iostream>
#include "Grad.h"
#include "UnderGrad.h"
using namespace std;


// ==== main ===================================================================
int main() {

    // Declare Objects
    UnderGrad underGrad(100, 9, "Tom Lee", "Freshman");
    Grad grad(101, 12, "Jim Jones", "PHD");

    // Display Objects
    cout << "UnderGrad Student:";
    underGrad.displayRecord();
    cout << "\nGrad Student:";
    grad.displayRecord();

    // Alter Grad Object
    grad.setUnits(15);

    // Display Grad Again
    cout << "\nGrad Student after set function:";
    grad.displayRecord();

    return 0;
}
// ==== End of main =============================================================


/* ================================== Output ===================================
UnderGrad Student:
ID:       100
Name:     Tom Lee
Units:    9
Level:    Freshman

Grad Student:
ID:       101
Name:     Jim Jones
Units:    12
Degree:   PHD

Grad Student after set function:
ID:       101
Name:     Jim Jones
Units:    15
Degree:   PHD

Calling Grad deconstructor

Calling Student Deconstructor

Calling UnderGrad Destructor

Calling Student Deconstructor
==================================== Output ===================================*/