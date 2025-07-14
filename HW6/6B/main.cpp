// =============================================================================
// Attached: HW_6b
// File: HW_6b.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Read and write a text file
// =============================================================================
// Description:
// This program reads the contents of text file data.txt and writes them into
// results.txt. It then outputs a message to the user saying the data has been
// written.
// =============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ==== main ===================================================================
int main() {

    // Declare variables
    const string fileNameIn = "data.txt";
    const string fileNameOut = "results.txt";
    string line = "";

    // Open input file
    fstream inFile(fileNameIn, ios::in);
    if (!inFile) {
        cout << "Error opening inFile\n";
        exit(1);
    }

    // Open output file
    fstream outFile(fileNameOut, ios::out);

    // Copy contents over
    while (!inFile.eof()) {
        
        // Get line from input
        getline(inFile, line);

        // Output line to output file
        outFile << line << endl;
    }

    // Display confirmation message
    cout << "The data has been written to the file." << endl;

    return 0;
}
// ==== End of main =============================================================


/* ================================== Output ===================================
The data has been written to the file.
==================================== Output ===================================*/