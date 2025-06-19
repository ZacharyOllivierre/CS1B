// =============================================================================
// Attached: HW_1B
// File: HW_1B.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Average Temperature
// =============================================================================
// Description: 
// This program prompts the user to enter the temperature of three cities. It
// then outputs the average temperature of the given cities.
// =============================================================================


#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getTemps(float* tempArrayPtr, const int numCities);
float calcAvg(float* tempArrayPtr, const int numCities);
void displayAvg(float average);

// ==== main ===================================================================
int main() {
    
    // Declaring variables
    const int numCities = 3;
    float temperatureArray[numCities] = {};
    float average = 0;

    // Get temperatures from user
    getTemps(temperatureArray, numCities);

    // Calculate average of temperatures
    average = calcAvg(temperatureArray, numCities);

    // Display Average to the user
    displayAvg(average);

    return 0;
}
// ==== End of main ============================================================


// ======= getTemps ============================================================
// Description:
// This function prompts the user to enter temperatures numCities (3). It stores
// the temperatures in temperatureArray via pointer
//
// Input:
// Address of temperature array
// Number of cities to enter
// User entered city temperatures
//
// Output:
// "Passes" temperatures back to main by accessing temperatureArray
// =============================================================================

void getTemps(float* tempArrayPtr, const int numCities) {
    // Display Initial Message
    cout << left << "\nEnter the temperature of " << numCities << " cities." << endl;

    // Prompt user to enter temperature for numCities number of cities
    for (int i = 0; i < numCities; i++) {
        cout << "#" << i + 1 << setw(5) << ":";
        cin >> tempArrayPtr[i];
    }
}

// ======= End of getTemps =====================================================


// ======= calcAvg =============================================================
// Description:
// This function calculates the averages of numCities within the temperature
// array. Returns average to main by value.
//
// Input:
// Address of temperature array
// Number of cities to calculate
//
// Output:
// Float average passed back to main by value
// =============================================================================

float calcAvg(float* tempArrayPtr, const int numCities) {
    float totalTemp = 0;
    float average = 0;

    // Calculate total temperature of all cities | Put in totalTemp
    for (int i = 0; i < numCities; i++) {
        totalTemp = totalTemp + tempArrayPtr[i];
    }

    // Calculate average | static_cast for non integer division
    average = totalTemp / static_cast<float>(numCities);

    return average;
}
// ======= End of calcAvg =====================================================


// ======= displayAvg ==========================================================
// Description:
// This function displays the average temperature of the user entered cities. Prints
// temperature with tenths precision.
//
// Input:
// Calculated average temperature of cities
//
// Output:
// Average temperature message to user
// =============================================================================

void displayAvg(float average) {
    // Format output
    cout << endl << fixed << setprecision(1);

    // Display average to user
    cout << "The average temperature is " << average << " degrees." << endl;
}
// ======= End of displayAvg ===================================================


/* ================================== Output ===================================

Enter the temperature of 3 cities.
#1:    77.5
#2:    82.5
#3:    71.0

The average temperature is 77.0 degrees.
==================================== Output ================================== */