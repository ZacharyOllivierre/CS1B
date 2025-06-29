// =============================================================================
// Attached: HW_3A
// File: HW3A.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Recursion - Decimal to binary
// =============================================================================
// Description:
// This program prompts the user to enter a non negative number and displays
// the integer value in binary. 
// =============================================================================

#include <iostream>
using namespace std;

// Function prototypes
void decToBinary(int userInput);

// ==== main ===================================================================
int main() {

    // Declare variables
    int input = 0;

    // Prompt user for non negative input
    cout << "Enter a non-negative integer value: ";
    cin >> input;

    // Call recursive function with userInput
    cout << "Decimal " << input << " = "; 
    decToBinary(input);
    cout << " binary." << endl;

    return 0;
}
// ==== End of main =============================================================


// ======= decToBinary =============================================================
// Description:
// This function translates an integer number into binary. It first checks for
// negative user input, in which case it outputs an error message and exits program
// with error flag. Otherwise function is called recursively with half of input
// while input is greater than 0. When recusion collapses each instance outputs
// digit of binary equivalent. Other output moved outside function to not repeat
// user signifiers.
// 
// Input:
// int user entered number
// 
// Output:
// binary equivalent, with leading 0
// =============================================================================
void decToBinary(int userInput) {
    // Check for invalid entry
    if (userInput < 0) {
        
        // Display invalid entry and quit program
        cout << "Invalid entry" << endl;
        exit(1);
    }

    // Call function recursively with half of userInput while input > 0
    if (userInput > 0) {
        decToBinary(userInput / 2);
    }

    // Display remainder of userInput / 2 for this function instance
    cout << userInput % 2;

}
// ======= End of decToBinary =====================================================


/* ================================== Output ===================================
Output 1:
Enter a non-negative integer value: 0
Decimal 0 = 0 binary.

Output 2:
Enter a non-negative integer value: 37
Decimal 37 = 0100101 binary.

Output 3:
Enter a non-negative integer value: -1
Decimal -1 = Invalid entry
==================================== Output ===================================*/