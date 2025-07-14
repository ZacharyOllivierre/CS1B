// =============================================================================
// Attached: HW_6D
// File: HW_6D.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Write a struct object to a bin file
// =============================================================================
// Description:
// This program prompts the user to enter the information for 3 cats. It saves
// this information in a binary file and displays a confirmation message.
// =============================================================================

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

const int MAXNAMESIZE = 50;
const int NUMCATS = 3;

// Declare struct
struct Cat {
    char name[MAXNAMESIZE];
    int age;
};

// ==== main ===================================================================
int main() {
    
    // Declare Variabels
    const string outFileName = "critters.bin";
    Cat cat {};
    int count = 0;

    // Declare outputFile object
    fstream outFile(outFileName, ios::out | ios::binary);

    // Get input for each cat
    cout << "Enter " << NUMCATS << " cat records." << endl;

    while (count < NUMCATS) {

        // Prompt for input
        cout << "Enter information about cat " << count << ":\n";
        
        cout << "NAME: ";
        cin.getline(cat.name, MAXNAMESIZE);

        cout << "AGE: ";
        cin >> cat.age;
        cout << endl;
        cin.ignore();

        // Write this cats information to file
        outFile.write(reinterpret_cast<char*>(&cat), sizeof(Cat));

        count++;
    }

    // Close file
    outFile.close();

    // Display confirmation message
    cout << endl << "Record written to file.\n";
    
    return 0;
}
// ==== End of main =============================================================


/* ================================== Output ===================================
Enter 3 cat records.
Enter information about cat 0:
NAME: Tom
AGE: 5

Enter information about cat 1:
NAME: Fluffy
AGE: 3

Enter information about cat 2:
NAME: Sweet Pea
AGE: 2


Record written to file.
==================================== Output ===================================*/