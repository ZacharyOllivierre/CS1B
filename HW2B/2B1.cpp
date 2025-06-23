// =============================================================================
// Attached: HW2B Problem 1
// File: HW2B1.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Problem 1 Random Array
// =============================================================================
// Description:
// This program creates a random list of ten integers between one and one
// hundred. It then prints the list, the smallest element, and the largest
// element.
// =============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
void fillArray(int* arrayPtr, const int arraySize);
void outputArray(int* arrayPtr, const int arraySize);

// ==== main ===================================================================
int main() {

    // Declaring variables
    const int arraySize = 10;
    int randomNums[arraySize] = {};

    // Seed random number generator with time
    srand(time(nullptr));

    // Fill array with random numbers
    fillArray(randomNums, arraySize);

    // Display array
    outputArray(randomNums, arraySize);

    return 0;
}
// ==== End of main =============================================================


// ======= fillArray =============================================================
// Description:
// This function fills the given array with random numbers from 1 to 100;
//
// Input:
// RandomNum array pointer
// Array size
//
// Output:
// Fills array in main with random numbers using arrayPtr 
// =============================================================================
void fillArray(int* arrayPtr, const int arraySize) {
    
    // Iterate over each element of array
    for (int x = 0; x < arraySize; x++) {

        // Set array index to random number within range
        arrayPtr[x] = (rand() % 100) + 1;    // 1 through 99 inclusive
    }
}
// ======= End of fillArray =====================================================


// ======= outputArray =============================================================
// Description:
// This function outputs each element of a given array. It also calculates and 
// displays the smallest and largest element.
// 
// Input:
// RandomNum array pointer
// Array size 
// 
// Output:
// Displays each element of array
// Displays largest and smallest element of array
// =============================================================================
void outputArray(int* arrayPtr, const int arraySize) {
    int smallest = arrayPtr[0];
    int largest = arrayPtr[0];

    // Display each array element
    cout << "Array Elements: ";
    for (int x = 0; x < arraySize; x++) {
        cout << arrayPtr[x] << " ";

        // Compare smallest value to current value
        if (arrayPtr[x] < smallest) {

            // Update smallest value
            smallest = arrayPtr[x];
        }

        // Compare largest value to current value
        if (arrayPtr[x] > largest) {
            largest = arrayPtr[x];
        }
    }
    
    // Display smallest and largest element
    cout << endl << "Smallest Element: " << smallest;
    cout << endl << "Largest Element: " << largest << endl;
}
// ======= End of outputArray =====================================================


/* ================================== Output ===================================
Array Elements: 65 59 35 24 55 54 37 35 46 83 
Smallest Element: 24
Largest Element: 83

Array Elements: 97 40 41 23 24 54 17 53 17 22 
Smallest Element: 17
Largest Element: 97
==================================== Output ===================================*/