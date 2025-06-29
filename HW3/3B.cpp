// =============================================================================
// Attached: HW_3B
// File: HW3B.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Recursion to display even numbers from 1 to 20
// =============================================================================
// Description:
// This program displays all even numbers from 1 to any maximum. Max is 20,
// minimum is always 1.
// =============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void showEvens(int max);

// ==== main ===================================================================
int main() {

    // Declare variables
    const int max = 20;

    // Display header to user
    cout << "Here are all even numbers from 1 to " << max << ":\n\n";

    // Call recursive function with maximum
    showEvens(max);

    cout << endl << endl;
    return 0;
}
// ==== End of main =============================================================


// ======= showEvens =============================================================
// Description:
// This function calls itself with max - 1 while max is greater than 1. 
// When functions collapse if max is even it is output with spacing of 5 chars;
// 
// Input:
// int max | Starts as max number and decrements by one each function call
// 
// Output:
// Displays all even numbers from 1 to max number (ascending)
// =============================================================================
void showEvens(int max) {
    int spacing = 5;

    // Call function recursively while max is greater than minimum
    if (max > 1) {
        showEvens(max - 1);
    }
    
    // Output function instance's max value if it's even
    if (max % 2 == 0) {
        cout << left << setw(spacing) << max;
    }
}
// ======= End of showEvens =====================================================


/* ================================== Output ===================================
Here are all even numbers from 1 to 20:

2    4    6    8    10   12   14   16   18   20  

==================================== Output ===================================*/