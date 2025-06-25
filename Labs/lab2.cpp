// Lab Code 9876
// Zachary Ollivierre
// =============================================================================
// Attached: Lab2
// File: Lab2.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: 2D Array Lab
// =============================================================================
// Description:
// Prompts the user to enter contents for a 2d array of size 2, 5. Program
// displays array, row totals, highest element, and lowest element.
// =============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

// Global Constants
const int rowSize = 2;
const int colSize = 5;

// Function Declarations
void getNumbers(int numbers[rowSize][colSize]);
void showNumbers(int numbers[rowSize][colSize]);
void addrows(int numbers[rowSize][colSize]);
void highest(int numbers[rowSize][colSize]);
void lowest(int numbers[rowSize][colSize]);
void printLines(int num);

// ==== main ===================================================================
int main() {

    // Declaring Variables
    int numbers[rowSize][colSize] = {};

    // Prompt User for Input
    getNumbers(numbers);

    // Display array
    showNumbers(numbers);

    // Display value of each row
    addrows(numbers);

    // Display highest number
    highest(numbers);

    // Display lowest number
    lowest(numbers);
}
// ==== End of main =============================================================


// ======= getNumbers ===========================================================
// Description:
// Prompts user to enter values for each cell of array
//
// Input:
// Numbers array
//
// Output:
// User input into numbers array 
// =============================================================================
void getNumbers(int numbers[rowSize][colSize]) {
    printLines(50);
    cout << endl;

    // Iterate through array
    for (int y = 0; y < rowSize; y++) {

        for (int x = 0; x < colSize; x++) {
            // Prompt for input
            cout << "Enter number in position (" << y + 1 << ", " << x + 1 << "): ";
            cin >> numbers[y][x];
        }

        // Break input each row
        cout << endl;
    }
}
// ======= End of getNumbers ====================================================

// ======= showNumbers ==========================================================
// Description:
// Displays array to user in grid formatt
// 
// Input:
// Numbers array
//
// Output:
// Displays each element of array to user
// =============================================================================
void showNumbers(int numbers[rowSize][colSize]) {
    const int spacing = 4;
    printLines(50);
    cout << endl;

    // Iterate through array
    for (int y = 0; y < rowSize; y++) {
        
        for (int x = 0; x < colSize; x++) {
            // Output element
            cout << setw(spacing) << numbers[y][x];
        }

        // Break output every row
        cout << endl;
    }

    cout << endl;
}
// ======= End of showNumbers ===================================================

// ======= addrows =============================================================
// Description:
// Function adds the contents of each row and displays it to user.
// 
// Input:
// Numbers array
//
// Output:
// Row total of each row 
// =============================================================================
void addrows(int numbers[rowSize][colSize]) {
    printLines(50);
    cout << endl;

    // Iterrate through array
    for (int y = 0; y < rowSize; y++) {
        // Initiallize counter variable
        int rowTotal = 0;

        for (int x = 0; x < colSize; x++) {
            // Add each element of row to rowTotal
            rowTotal += numbers[y][x];
        }
        
        // Output total
        cout << "The total for row " << y + 1 << ": " << rowTotal << endl << endl;
    }
}
// ======= End of addrows ======================================================

// ======= highest =============================================================
// Description:
// Finds and displays highest number within array
// 
// Input:
// Numbers array
// 
// Output:
// Highest value within array
// =============================================================================
void highest(int numbers[rowSize][colSize]) {
    int highest = numbers[0][0];
    printLines(50);
    cout << "\n";

    // Iterate through array (linear search)
    for (int y = 0; y < rowSize; y++) {
        
        for (int x = 0; x < colSize; x++) {
            
            // Update highest variable
            if (numbers[y][x] > highest) {
                highest = numbers[y][x];
            }
        }
    }
    // Display highest number to user
    cout << "The highest number is " << highest << ".\n\n";
}
// ======= End of highest =====================================================

// ======= lowest =============================================================
// Description:
// Finds and displays the lowest element in array
// 
// Input:
// Numbers array
// 
// Output:
// Lowest value within array
// =============================================================================
void lowest(int numbers[rowSize][colSize]) {
    int lowest = numbers[0][0];
    printLines(50);
    cout << "\n";

    // Iterate through array (linear search)
    for (int y = 0; y < rowSize; y++) {
        
        for (int x = 0; x < colSize; x++) {
            
            // Update lowest variable
            if (numbers[y][x] < lowest) {
                lowest = numbers[y][x];
            }
        }
    }
    // Display lowest number to user
    cout << "The lowest number is " << lowest << ".\n\n";
    printLines(50);
}
// ======= End of lowest =======================================================

// ======= printLines ==========================================================
// Description:
// Prints num amount of lines for user display
//
// Input:
// Number of "-" to print
//
// Output:
// Displays num size line accross screen 
// =============================================================================
void printLines(int num) {
    for (int i = 0; i < num; i++) {
        cout << "-";
    }
    cout << endl;
}
// ======= End of printLines ===================================================


/* ================================== Output ===================================
--------------------------------------------------

Enter number in position (1, 1): 1
Enter number in position (1, 2): 2
Enter number in position (1, 3): 3
Enter number in position (1, 4): 4
Enter number in position (1, 5): 5

Enter number in position (2, 1): 6
Enter number in position (2, 2): 7
Enter number in position (2, 3): 8
Enter number in position (2, 4): 9
Enter number in position (2, 5): 10

--------------------------------------------------

   1   2   3   4   5
   6   7   8   9  10

--------------------------------------------------

The total for row 1: 15

The total for row 2: 40

--------------------------------------------------

The highest number is 10.

--------------------------------------------------

The lowest number is 1.

--------------------------------------------------
==================================== Output ===================================*/