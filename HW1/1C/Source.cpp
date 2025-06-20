// =============================================================================
// Attached: HW_1C
// File: HW1C.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Student Record
// =============================================================================
// Description:
// This program prompts the user to enter a student record. This record is then
// displayed back to the user.
// =============================================================================

#include <iostream>
#include <iomanip>
#include <string>
#include "prototypes.h"
using namespace std;


// ==== main ===================================================================
int main() {
    
    // Declaring Variables
    int id = 0;
    string name = {};
    float gpa = 0;

    // Prompt User to Enter Student Record
    getRecord(id, name, gpa);

    // Clear Screen
    system("clear");

    // Display Student Record to User
    displayRecord(id, name, gpa);

    // Prompt User to Enter Any Key
    cout << "Press any key to continue . . . ";
    cin.get();

    return 0;
}
// ==== End of main =============================================================



// ======= getRecord =============================================================
// Description:
// This function prompts the user to enter a student record. A record requires a
// student ID, name, and GPA. These user inputs are passed to main by reference.
//
// Input:
// User entered student record (ID, Name, GPA)
//
// Output:
// Passes user entered student ID, Name, and GPA to main by reference
// =============================================================================

void getRecord(int& id, string& name, float& gpa) {
    // Prompt user for student record
    cout << left << "Enter a student record:" << endl;
    
    cout << setw(10) << "ID:";
    cin >> id;
    
    // Clear leftover newline
    cin.ignore();

    cout << setw(10) << "NAME:";
    getline(cin, name);

    cout << setw(10) << "GPA:";
    cin >> gpa;

    // Clear leftover newline
    cin.ignore();
}
// ======= End of getRecord =====================================================


// ======= displayRecord =============================================================
// Description:
// This function displays the user entered student record. GPA is displayed to one
// decimal place.
//
// Input:
// User entered student record (ID, Name, GPA)
//
// Output:
// Displays student record to user 
// =============================================================================

void displayRecord(int id, string name, float gpa) {
    // Display student record to user
    cout << "STUDENT RECORD\n\n";
    
    cout << setw(10) << "ID:" << id << endl;
    cout << setw(10) << "NAME:" << name << endl;
    cout << setw(10) << fixed << setprecision(1) << "GPA:" << gpa << endl;
}
// ======= End of displayRecord =====================================================


/* ================================== Output ===================================
Enter a student record:
ID:       12345
NAME:     Tom Lee
GPA:      3.5

- screen clear-

STUDENT RECORD

ID:       12345
NAME:     Tom Lee
GPA:      3.5
Press any key to continue . . . 
==================================== Output ===================================*/