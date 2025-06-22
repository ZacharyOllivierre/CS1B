// =============================================================================
// Attached: HW_2c
// File: HW2C.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Two Dimensional Array
// =============================================================================
// Description:
// This program prompts the user to enter the values of a two dimentional array.
// The screen then clears and the array is displayed to the user as a table.
// =============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getData(int* numArrayPtr, const int rowSize, const int columnSize);
void displayArray(int* numArrayPtr, const int rowSize, const int columnSize);

// ==== main ===================================================================
int main() {

    // Declaring Variables
    const int rowSize = 3;
    const int columnSize = 4;
    int numArray[rowSize][columnSize] = {};

    // Prompt User to Enter Array Values
    getData(&numArray[0][0], rowSize, columnSize);

    // Clears Terminal
    system("clear");

    // Display Array to User
    displayArray(&numArray[0][0], rowSize, columnSize);

    return 0;
}
// ==== End of main =============================================================


// ======= getData =============================================================
// Description:
// This function prompts the user to enter all values for a given 2d array.
// It uses a double for loop structure iterating in row-major order.
//
// Input:
// Address of first element of numArray
// Size of array row
// Size of array column
// User entered values for each cell
//
// Output:
// Stores user input in numArray in main through numArrayPtr pointer  
// =============================================================================
void getData(int* numArrayPtr, const int rowSize, const int columnSize) {
    cout << "Enter integers into the 2-Dimensional array:\n\n";

    // Iterate over each row in array
    for (int y = 0; y < rowSize; y++) {

        // Iterate over each column in each row
        for (int x = 0; x < columnSize; x++) {
            
            // Prompt user for input | Access array with pointer arithmetic
            cout << "Enter a number: ";
            cin >> numArrayPtr[y * columnSize + x];
        }
        // Seperates input prompts for each row
        cout << endl;
    }
}
// ======= End of getData =====================================================


// ======= displayArray =============================================================
// Description:
// This function displays the values of a 2D array. It displays them as a 2d
// table.
// 
// Input:
// Address of first element of numArray
// Size of array row
// Size of array column
//
// Output:
// Displays 2D array as structure suggests (table) 
// =============================================================================
void displayArray(int* numArrayPtr, const int rowSize, const int columnSize) {
    cout << "Here is the data in the 2-Dimensional array:\n\n";

    // Iterate over each row in array
    for (int y = 0; y < rowSize; y++) {
        
        // Iterate over each column in each row
        for (int x = 0; x < columnSize; x++) {
            
            // Output Value
            cout << setw(5) << numArrayPtr[y * columnSize + x];
        }
        // Endline after every column in row has been displayed
        cout << endl;
    }
}
// ======= End of displayArray =====================================================


/* ================================== Output ===================================
Enter integers into the 2-Dimensional array:

Enter a number: 1
Enter a number: 45
Enter a number: 765
Enter a number: 6

Enter a number: 32
Enter a number: 45
Enter a number: 789
Enter a number: 343

Enter a number: 22
Enter a number: 64
Enter a number: 12
Enter a number: 555

---screen clear---

Here is the data in the 2-Dimensional array:

    1   45  765    6
   32   45  789  343
   22   64   12  555
==================================== Output ===================================*/