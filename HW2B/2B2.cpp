// =============================================================================
// Attached: HW2B_Problem 2
// File: HW2B2
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Merge Arrays
// =============================================================================
// Description:
// This program creates two one dimensional arrays of size 5 and fills them with
// random values from 100 to 199. The program merges the two arrays together
// in a zipper formation and outputs all 3 arrays.
// =============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
void fillArray(int* arrayPtr, const int arraySize);
int* mergeArrays(int* arrayPtr1, int* arrayPtr2, const int arraySize);
void outputArray(int* arrayPtr, const int arraySize);

// ==== main ===================================================================
int main() {

    // Declaring variables
    const int arraySize = 5;
    int arrayOne[arraySize] = {};
    int arrayTwo[arraySize] = {};
    int* mergedArray = nullptr;

    // Seed random number with time
    srand(time(nullptr));

    // Fill both arrays with random numbers (100 - 199)
    fillArray(arrayOne, arraySize);
    fillArray(arrayTwo, arraySize);

    // Get address of merged array
    mergedArray = mergeArrays(arrayOne, arrayTwo, arraySize);

    // Output all three arrays
    cout << "First Array\n";
    outputArray(arrayOne, arraySize);
    
    cout << "\n\nSecond Array\n";
    outputArray(arrayTwo, arraySize);
    
    cout << "\n\nMerged Array\n";
    outputArray(mergedArray, arraySize * 2);
    cout << endl;

    return 0;
}
// ==== End of main =============================================================


// ======= fillArray =============================================================
// Description:
// This function fills the given array with random numbers from 100 to 199 inclusive
//
// Input:
// RandomNum array pointer
// Array size
//
// Output:
// Fills array in main with random numbers using arrayPtr 
// =============================================================================
void fillArray(int* arrayPtr, const int arraySize) {
    for (int x = 0; x < arraySize; x++) {
        arrayPtr[x] = rand() % 100 + 100;
    }
}
// ======= End of fillArray =====================================================


// ======= Function =============================================================
// Description:
// This function creates a new array on the heap of double the arraySize.
// The two random arrays are merged into the new array with alternating priority.
//
// Input:
// Random array pointer one
// Random array pointer two
// Const int array size
// 
// Output:
// Returns a pointer to new array created on heap
// =============================================================================
int* mergeArrays(int* arrayPtr1, int* arrayPtr2, const int arraySize) {
    int arrayCounterOne = 0;
    int arrayCounterTwo = 0;
    
    // Allocate memory for new array
    int* mergedArray = new int[arraySize * 2];

    // Merge arrays
    for (int x = 0; x < arraySize * 2; x++) {
        
        // Add from first array when x is even
        if (x % 2 == 0) {
            mergedArray[x] = arrayPtr1[arrayCounterOne++];
        }
        else {
            mergedArray[x] = arrayPtr2[arrayCounterTwo++];
        }
    }
    
    return mergedArray;
}

// ======= End of Function =====================================================


// ======= outputArray =============================================================
// Description:
// This function outputs each element of a given array.
// 
// Input:
// Array pointer
// Array size 
// 
// Output:
// Displays each element of array
// =============================================================================
void outputArray(int* arrayPtr, const int arraySize) {

    // Display each array element
    for (int x = 0; x < arraySize; x++) {
        cout << arrayPtr[x] << " ";
    }
}
// ======= End of outputArray =====================================================


/* ================================== Output ===================================
First Array
131 163 168 183 134 

Second Array
168 164 123 106 122 

Merged Array
131 168 163 164 168 123 183 106 134 122 
==================================== Output ===================================*/