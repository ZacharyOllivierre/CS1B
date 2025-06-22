// =============================================================================
// Attached: HW_2a
// File: HW2A.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: "c_strings"
// =============================================================================
// Description:
// This program prompts the user to enter their age, first name, and last name.
// First and last names are stored seperately then concatenated and displayed
// to the user with their age.
// =============================================================================

#include <iostream>
using namespace std;

// Function prototypes
void displayInfo(char fullName[20], int age);

// ==== main ===================================================================
int main() {

    // Declaring Variables
    char firstName[10] = "Tom";
    int firstNameCounter = 0;
    char lastName[10];
    int lastNameCounter = 0;
    char fullName[20];
    int age = 0;
    
    // Prompt User for Age
    cout << "Enter your age: ";
    cin >> age;

    // Prompt User for Name
    cout << "Enter the last name: ";
    cin >> lastName;

    // Concatenate First and Last Name (with space)
    while (firstName[firstNameCounter] != '\0') {

        // Adds first name to full name while current character is not null
        fullName[firstNameCounter] = firstName[firstNameCounter];
        firstNameCounter++;
    }

    // Add Space Between First / Last
    fullName[firstNameCounter++] = ' ';

    // Add Last Name to Full name
    while (lastName[lastNameCounter] != '\0') {
        
        // Adds last name to full name[size of first name plus size of current last name]
        fullName[firstNameCounter + lastNameCounter] = lastName[lastNameCounter];
        lastNameCounter++;
    }

    // Add Null terminator
    fullName[firstNameCounter + lastNameCounter] = '\0';

    // Display Output
    displayInfo(fullName, age);

    // Ouput "any key" Prompt
    cout << "\nPress any key";
    cin.ignore();
    cin.get();

    return 0;
}
// ==== End of main ============================================================


// ======= displayInfo =========================================================
// Description:
// This function displays the user's full name and age entered in main.
//
// Input:
// C_string fullName | User's first and last name put together with a space
// int age | User's entered age
//
// Output:
// Displays user's full name and age
// =============================================================================
void displayInfo(char fullName[20], int age) {
    // Display full name and age
    cout << "\nHello " << fullName << ". You are " << age << " years old.\n";
}
// ======= End of displayInfo ==================================================

/* ================================== Output ===================================
Enter your age: 21
Enter the last name: Lee

Hello Tom Lee. You are 21 years old.

Press any key
==================================== Output ===================================*/