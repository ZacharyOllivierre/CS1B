// =============================================================================
// Attached: HW_3C
// File: HW3C.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Recursion to display odd numbers from 20 to 0
// =============================================================================
// Description:
// This program prints all odd numbers recursively from a maximum (20 implicitly) 
// to 0.
// =============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void showOdds(int max);

// ==== main ===================================================================
int main() {

    // Declare variable
    const int max = 20;

    // Display header for list
    cout << "Here are all odd numbers from " << max << " to 0:\n\n";

    // Call function to print odd list
    showOdds(max);

    // Add blank lines below
    cout << endl << endl;

    return 0;
}
// ==== End of main =============================================================



// ======= showOdds =============================================================
// Description:
// This function is passed a max value and prints all odd numbers from that number
// to 0. Function checks if value is odd and prints it then calls itself while value
// (max) is greater than 0. Output is before function call to print numbers 
// decending. Recursion is called with -1 and then checked if odd rather than 
// decrement by 2 so max can start as both an odd or even number.
// 
// Input:
// int max number | decremented within recursion
// 
// Output:
// displays odd numbers from max number to zero
// =============================================================================
void showOdds(int max) {
    int spacing = 5;

    // Check if max is odd
    if (max % 2 != 0) {

        // If max is odd display it
        cout << left << setw(spacing) << max;
    }

    // Call function recursively while max is greater than 0
    if (max > 0) {
        showOdds(max - 1);
    }
}
// ======= End of showOdds =====================================================


/* ================================== Output ===================================
Here are all odd numbers from 20 to 0:

19   17   15   13   11   9    7    5    3    1    

==================================== Output ===================================*/