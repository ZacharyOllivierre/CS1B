// =============================================================================
// Attached: HW_1D
// File: HW1D.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Display Volume
// =============================================================================
// Description:
// This program prompts the user for the dimensions of a swimming pool (width,
// length, and depth). The validity of the user entry is checked and the volume
// of the pool is output to the user.
// =============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getDimensions(float& width, float& length, float& depth);
bool areValid(float width, float length, float depth);
float calcVolume(float width, float length, float depth);
void displayVolume(float volume);


// ==== main ===================================================================
int main() {

    // Declaring Variables
    float width = 0;
    float length = 0;
    float depth = 0;
    float volume = 0;

    // Input Validation Loop | Prompts for input until all values are valid
    do {
        getDimensions(width, length, depth);

    } while (!areValid(width, length, depth));

    // Calculate Volume
    volume = calcVolume(width, length, depth);

    // Display Volume to User
    displayVolume(volume);

    return 0;
}
// ==== End of main =============================================================


// ======= getDimensions =======================================================
// Description:
// This function prompts the user to enter pool dimensions (width, length, depth)
// and passes these values back to main by reference.
//
// Input:
// User entered width, length, and depth
//
// Output:
// Width, length, and depth passed to main by reference 
// =============================================================================
void getDimensions(float& width, float& length, float& depth) {
    
    // Prompt user to enter pool dimensions
    cout << left << "\nEnter pool dimensions." << endl;

    cout << setw(10) << "Width:";
    cin >> width;
    cout << setw(10) << "Length:";
    cin >> length;
    cout << setw(10) << "Depth:";
    cin >> depth;
}
// ======= End of getDimensions ================================================

// ======= areValid ============================================================
// Description:
// This function determines whether the user entered dimensions are valid.
// A dimension is valid when it falls within it's expected range.
//
// Input:
// Pool dimensions width, length, and depth
//
// Output:
// Returns true if all dimensions are valid, false if not 
// =============================================================================
bool areValid(float width, float length, float depth) {
    
    // Check if width is valid
    if (width <= 5 || width >= 20) {
        // If dimension is invalid, early out with false return
        return false;
    }
    // Check if length is valid
    if (length <= 5 || length >= 100) {
        return false;
    }
    // Check if depth is valid
    if (depth <= 1 || depth >= 12) {
        return false;
    }

    // Return true as all dimensions are valid
    return true;
}
// ======= End of areValid =====================================================

// ======= calcVolume ==========================================================
// Description:
// This function calculates the volume of a given pool based on the dimensions
// passed to it. This function is only called with valid dimensions.
// 
// Input:
// Passed from main width, length, and depth
//
// Output:
// Returns calculated volume back to main 
// =============================================================================
float calcVolume(float width, float length, float depth) {
    
    // Return volume (width * length * depth)
    return width * length * depth;
}
// ======= End of calcVolume ===================================================

// ======= displayVolume =======================================================
// Description:
// This function displays the calculated volume to the user.
//
// Input:
// Calculated volume
//
// Output:
// Displays volume to the user 
// =============================================================================
void displayVolume(float volume) {
    
    // Display volume to user
    cout << "\nThe volume is " << volume << " cubic feet." << endl;
}
// ======= End of displayVolume ================================================


/* ================================== Output ===================================

Enter pool dimensions.
Width:    12
Length:   22
Depth:    8

The volume is 2112 cubic feet.
==================================== Output ===================================*/