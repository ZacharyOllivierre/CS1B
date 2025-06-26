// Zachary Ollivierre
// Lab code 9999
// =============================================================================
// Attached: Lab 3
// File: Lab3.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Enum Roster
// =============================================================================
// Description:
// This program outputs a menu of different students. The user is prompted to
// choose one and their birthday will be displayed.
// =============================================================================

#include <iostream>
using namespace std;

// Enum Roster
enum Roster {Tom = 1, Sharon, Bill, Teresa, John};

// Function prototypes
void displayBirthday(Roster choice);
void displayMenu();

// ==== main ===================================================================
int main() {
    
    // Declaring variables
    int input = 0;
    Roster choice = {};

    // Display menu to user
    displayMenu();

    // Get user choice | input validation 1 - 5 inclusive
    do {
        cout << "Whose birthday do you want to know: ";
        cin >> input;

    } while (input < 0 || input > 5);

    choice = static_cast<Roster>(input);

    // Output Birthday
    displayBirthday(choice);

    return 0;
}
// ==== End of main =============================================================



// ======= displayBirthday =============================================================
// Description:
// This functino displays a birthday based on user entered Roser choice;
//
// Input:
// Roster choice
// 
// Output:
// Roster choice's birthday
// =============================================================================
void displayBirthday(Roster choice) {
    
    // Display Birthday to user
    switch (choice) {
        
        case Tom:
            cout << "Tom's birthday is January 3." << endl;
            break;

        case Sharon:
            cout << "Sharon's birthday is Aprill 22." << endl;
            break;

        case Bill:
            cout << "Bill's birthday is May 19." << endl;
            break;
        
        case Teresa:
            cout << "Teresa's birthday is July 2." << endl;
            break;
        
        case John:
            cout << "John's birthday is June 17." << endl;
            break;
        
        default:
            // Output Error if choice is not expected
            cout << "Error invalid input." << endl;
            exit(1);
    }
}
// ======= End of displayBirthday =====================================================


// ======= displayMenu =============================================================
// Description:
// This function displays roster choice menu to user.
//
// Input:
// None
// 
// Output:
// Roster menu
// =============================================================================
void displayMenu() {
    
    // Display Header
    cout << "This program will give you a student's birthday." << endl << endl;

    // Display Menu
    cout << "1.) Tom" << endl;
    cout << "2.) Sharon" << endl;
    cout << "3.) Bill" << endl;
    cout << "4.) Teresa" << endl;
    cout << "5.) John" << endl << endl;
}
// ======= End of displayMenu =====================================================


/* ================================== Output ===================================
This program will give you a student's birthday.

1.) Tom
2.) Sharon
3.) Bill
4.) Teresa
5.) John

Whose birthday do you want to know: 1
Tom's birthday is January 3.
==================================== Output ===================================*/