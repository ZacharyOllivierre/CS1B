// =============================================================================
// Attached: HW_6a
// File: HW_6a.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Triangle Function (HW_7a)
// =============================================================================
// Description:
// This program reads the numbers within a file and outputs them to the screen
// =============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ==== main ===================================================================
int main() {

    // Variables
    string fileName = "data.txt";
    string line = "";

    // Declare file object
    fstream infile(fileName, ios::in);

    // Check if file opened
    if (infile.fail()) {
        cout << "Error opening file" << endl;
        exit(1);
    }

    // Display each line
    cout << "Here are the numbers in the file:\n";
    while (!infile.eof()) {
        
        getline(infile, line);

        cout << line << endl;
    }

    infile.close();

    return 0;
}
// ==== End of main =============================================================


/* ================================== Output ===================================
Here are the numbers in the file:
3
4
5
==================================== Output ===================================*/