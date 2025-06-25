// Lab code 1111
// Zachary Ollivierre
// =============================================================================
// Attached: Lab 2b
// File: Lab2b.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Finding Sum of Two
// =============================================================================
// Description:
// This program finds two indicies of an array that add up to user given 
// target value.
// =============================================================================

#include <iostream>
using namespace std;

// Function prototypes
bool findIndex(int& index1, int& index2, int* numPtr, const int numSize, int target);
int getInput();

// ==== main ===================================================================
int main() {

    // Declare Variables
    const int SIZE = 5;
    int num[SIZE] = {2, 7, 11, 15, 1};
    int target = 0;
    int index1 = -1;
    int index2 = -1;
    bool found = false;

    // Prompt user for target value
    target = getInput();

    // Find the indexs where the operands sum to the target
    found = findIndex(index1, index2, num, SIZE, target);

    // Output indexs or not found
    if (found) {
        cout << "\nThe locations for sum to target is: num[" 
             << index1 << ", " << index2 << "]" << endl;
    }
    else {
        cout << "\nThere are no values within array that add to " << target << endl;
    }

    return 0;
}
// ==== End of main =============================================================



// ======= findIndex =============================================================
// Description:
// This function finds the indexs of two values within array that add up to 
// given target value. Theses indexs are passed by reference through index1 and
// index2. Function returns bool soley to early out without break when match found.
//
// Input:
// Index1 and index2 
// Num array pointer
// Num array size
// User defined target value
// 
// Output:
// Updates index1 and index2 with return indexs
// Functions returns true false of found or not found
// =============================================================================
bool findIndex(int& index1, int& index2, int* numPtr, const int numSize, int target) {
    // Iterate for first value
    for (int val1 = 0; val1 < numSize - 1; val1++) {

        // Test each other elemet after with first value
        for (int val2 = val1; val2 < numSize; val2++) {

            // Compare to target
            if (numPtr[val1] + numPtr[val2] == target) {
                
                // Update Index
                index1 = val1;
                index2 = val2;
                return true;
            }
        }
    }
    // If none found return false
    return false;
}

// ======= End of findIndex =====================================================

// ======= getInput =============================================================
// Description:
// This function prompts the user to enter a target value.
// 
// Input:
// User entered target value
// 
// Output:
// Returns target value to main
// =============================================================================
int getInput() {
    int target = 0;

    // Prompt for input
    cout << "Enter target variable: ";
    cin >> target;

    return target;
}
// ======= End of getInput =====================================================


/* ================================== Output ===================================
Enter target variable: 26

The locations for sum to target is: num[2, 3]
==================================== Output ===================================*/