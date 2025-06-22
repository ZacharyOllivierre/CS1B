// =============================================================================
// Attached: HW_1e
// File: HW1E.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Check Login
// =============================================================================
// Description:
// This program prompts the user to enter a login (ID and Password). If this
// login matches the one saved in text file login.txt the program displays 
// Valid. Otherwise it displays Invalid.
// =============================================================================

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

// Function prototypes
void getLogin(string& id, string& password);
bool validateLogin(string id, string password);
void showResult(bool valid);

// ==== main ===================================================================
int main() {
    
    // Declaring Variables
    string id = {};
    string password = {};
    bool valid = false;

    // Prompt User for Input
    getLogin(id, password);

    // Validate User Input | Store within bool valid
    valid = validateLogin(id, password);

    // Display Result to User
    showResult(valid);

    return 0;
}
// ==== End of main =============================================================


// ======= getLogin =============================================================
// Description:
// This function prompts the user to enter an ID and password. These values
// are passed back to main by reference.
//
// Input:
// User entered id and password
//
// Output:
// Id and password passed back to main by reference 
// =============================================================================
void getLogin(string& id, string& password) {
    
    // Prompt user to enter id and password
    cout << left << setw(15) << "Enter your ID:";
    getline(cin, id);

    cout << setw(15) << "Enter your PW:";
    getline(cin, password);
}
// ======= End of getLogin =====================================================

// ======= validateLogin =============================================================
// Description:
// This function validates the user input from getLogin(). The ID and PW are valid
// (return true) if they match ID and PW in login.txt file. If the user login does
// not match saved ID and PW function returns false.
//
// Input:
// User entered id and password from getLogin()
//
// Output:
// Validity of input (true | false) returned to main
// =============================================================================
bool validateLogin(string id, string password) {
    string fileId = {};
    string filePassword = {};

    // Open file
    ifstream inFile("login.txt");

    // Check if file has opened
    if (!inFile) {
        cout << "File could not be opened." << endl;
        exit(1);
    }
    // Read file contents into fileId and filePassword
    getline(inFile, fileId);
    getline(inFile, filePassword);

    // Check if file contents match user input
    if (fileId == id && filePassword == password) {
        // Return true if contents match
        return true;
    }

    // Contents don't match return false
    return false;
}
// ======= End of validateLogin =====================================================

// ======= showResult =============================================================
// Description:
// This function recieves boolean validity of user input. If user input is valid
// display Valid, otherwise display Invalid.
//
// Input:
// bool valid - validity of user input from validateLogin()
//
// Output:
// Displays Valid or Invalid to user
// =============================================================================
void showResult(bool valid) {
    
    // Display result to user
    if (valid) {
        cout << "Valid." << endl;
    } else {
        cout << "Invalid." << endl;
    }
}
// ======= End of showResult =====================================================


/* ================================== Output ===================================
Enter your ID: tommy
Enter your PW: 12345
Valid.
==================================== Output ===================================*/