// =============================================================================
// Attached: HW_2B
// File: HW2B.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: ID Search
// =============================================================================
// Description:
// This program prompts the user to enter an ID number to be searched. This
// ID number is checked to be one of five pre-determined IDs. If the ID is in
// the list, the index is displayed, if not a message saying so displays.
// =============================================================================

#include <iostream>
using namespace std;

// Function prototypes
int getUserId();
void searchArray(int userID, int& index, int* idKeysPtr, const int arraySize);


// ==== main ===================================================================
int main() {

    // Declaring Variables
    const int arraySize = 5;
    int idKeys[arraySize] = {12345, 54321, 11223, 33211, 44411};
    int userId = 0;
    int index = 0;

    // Prompt User for ID Number
    userId = getUserId();

    // Search Key Array for Match
    searchArray(userId, index, idKeys, arraySize);

    // Output Result to User
    if (index == -1) {
        cout << "ID number " << userId << " was not in the list." << endl;
    }
    else {
        cout << "ID number " << userId << " was found at index " << index << endl;
    }

    return 0;
}
// ==== End of main =============================================================


// ======= getUserId =============================================================
// Description:
// This function prompts the user to enter an ID number. This value is passed 
// back to main by value.
//
// Input:
// User entered ID (int)
//
// Output:
// Int ID to main by value
// =============================================================================
int getUserId() {
    int userID = 0;

    // Prompt the user for ID Number
    cout << "Enter ID Number: ";
    cin >> userID;

    // Return userID to main
    return userID;
}
// ======= End of getUserId =====================================================


// ======= searchArray =============================================================
// Description:
// This function does a linear search through array idKeys to find a match for
// user entered userID. It passes back index by reference, using -1 if no matching
// index is found.
//
// Input:
// User ID Number
// Index of matching ID Key | By reference
// Address of ID Key's array | Avoids defining size within formal parameters
// ID Key array size | Loop range
//
// Output:
// Passes Index of matching key (or -1) by reference
// =============================================================================
void searchArray(int userID, int& index, int* idKeysPtr, const int arraySize) {
    // Flag for not found
    index = - 1;

    // Linear Search comparing userID to each index of array at idKeysPtr
    for (int x = 0; x < arraySize; x++) {
        
        if (idKeysPtr[x] == userID) {
            
            // Store matching index
            index = x;
        }
    }
}
// ======= End of searchArray =====================================================

/* ================================== Output ===================================
Enter ID Number: 33211
ID number 33211 was found at index 3
==================================== Output ===================================*/