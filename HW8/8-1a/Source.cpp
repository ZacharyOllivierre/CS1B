// =============================================================================
// Attached: HW_8-1a
// File: HW_8.1a
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Student Class 1a
// =============================================================================
// Description:
// This program displays the values of two Student objects (default / paramaterized). 
// The values of one are changed and then output again to the user.
// =============================================================================

#include "Student.h"
#include <iostream>


// ==== main ===================================================================
int main() {
    
    // Create Student Objects
    Student s1;
    Student s2(100, "Tom P. Lee", 12);

    // Display Students
    cout << "Student #1:";
    s1.displayRecord();
    cout << "\nStudent #2:";
    s2.displayRecord();

    // Change Values of Student 1
    s1.setID(101);
    s1.setName("John Lee Hooker");
    s1.setUnits(15);

    // Display Student 1
    cout << "\n" << "Student #1 after set functions:";
    s1.displayRecord();

    return 0;
}
// ==== End of main =============================================================


/* ================================== Output ===================================
Student #1:
ID:    0
Name:   
Units: 0

Student #2:
ID:    100
Name:  Tom P. Lee
Units: 12

Student #1 after set functions:
ID:    101
Name:  John Lee Hooker
Units: 15
==================================== Output ===================================*/