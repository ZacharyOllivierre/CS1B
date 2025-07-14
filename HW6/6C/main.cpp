// =============================================================================
// Attached: HW_6c
// File: HW_6c.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Append data to existing data in a file
// =============================================================================
// Description:
// This program reads the contents of data.txt and displays them to the user. It
// then prompts the user to enter three more numbers and appends them to the
// results file.
// =============================================================================

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// ==== main ===================================================================
int main() {

    // Variables
    string fileNameIn = "data.txt";
    string fileNameOut = "results.txt";
    string line = "";
    int num = 0;

    // Declare file object
    fstream infile(fileNameIn, ios::in);

    // Check if file opened
    if (infile.fail()) {
        cout << "Error opening file" << endl;
        exit(1);
    }

    // Declare output file object
    fstream outFile(fileNameOut, ios::out);

    // Display each line and add to outfile
    cout << "Here are the numbers in the file:\n";
    while (!infile.eof()) {
        
        getline(infile, line);

        outFile << line << endl;
        cout << line << endl;
    }

    // Close files
    infile.close();
    outFile.close();

    // Create output file object
    fstream appendFile(fileNameOut, ios::out | ios::app);

    // Prompt user to enter 3 more number
    cout << endl << "Enter three more numbers:" << endl;
    
    for (int x = 0; x < 3; x++) {
        // Get number from user
        cin >> num;

        // Append it to file
        appendFile << num << endl;
    }

    // Display conformation message
    cout << endl << "The numbers have been written (appended) to results.txt" << endl;

    appendFile.close();
    return 0;
}
// ==== End of main =============================================================


/* ================================== Output ===================================
Here are the numbers in the file:
3
4
5

Enter three more numbers:
1
2
3

The numbers have been written (appended) to results.txt
==================================== Output ===================================*/