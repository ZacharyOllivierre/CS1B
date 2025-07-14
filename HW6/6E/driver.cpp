// =============================================================================
// Attached: HW_6E
// File: HW_6E.pdf
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
// Additionally the user is prompted for another cat and it is appended to the
// end of the file. Then all contents of the file are displayed
// =============================================================================

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

const int MAXNAMESIZE = 50;

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
    cout << "Enter 3 cat records." << endl;

    while (count < 3) {

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
    cout << "Record written to file.\n\n";

    // Prompt user for another cat
    cout << "Enter one more cat:\n";
    cout << "Name: ";
    cin.getline(cat.name, MAXNAMESIZE);
    cout << "Age: ";
    cin >> cat.age;

    // Declare file object to append file
    fstream appendFile(outFileName, ios::out | ios::binary | ios::app);
    
    // Append file with new cat / close file
    appendFile.write(reinterpret_cast<char*>(&cat), sizeof(Cat));
    appendFile.close();

    // Create reading file object
    fstream inFile(outFileName, ios::in |ios::binary);
    if (!inFile) {
        cout << "Error opening file.\n";
        exit(1);
    }
    
    // Display all cats in file
    cout << endl << "Here is a list of all cats:\n";
    count = 0;
    while (count < 4 && inFile.read(reinterpret_cast<char*>(&cat), sizeof(Cat))) {

        cout << left << setw(15) << cat.name << cat.age << endl;
        count++;
    }
    
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

Enter one more cat:
Name: Jasmin
Age: 4

Here is a list of all cats:
Tom            5
Fluffy         3
Sweet Pea      2
Jasmin         4
==================================== Output ===================================*/