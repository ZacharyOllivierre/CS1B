// =============================================================================
// Attached: HW_4
// File: HW_4.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Struct Date
// =============================================================================
// Description:
// This program prompts the user to enter a date until a valid date is entered.
// The program then displays one day after the user entered date.
// =============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

// Declare struct Date
struct Date {
    int month;
    int day;
    int year;
};

// Function prototypes
void getDate(Date& today);
bool isDateValid(Date today);
void addOneDay(Date& today);
void displayTommorow(Date tommorow);

// ==== main ===================================================================
int main() {

    // Declare variables
    Date today = {};
    bool running = true;
    char input = ' ';

    // Main program run loop
    while (running) {

        // Prompt user to enter date / validate date
        getDate(today);

        // Add one day to user entered date
        addOneDay(today);

        // Display tommorow's date to user
        displayTommorow(today);

        // Prompt user to repeat program
        cout << "Do it again? (Y/N): ";
        cin >> input;

        // Update running bool from user input
        if (input != 'y' && input != 'Y') {
            running = false;
        }
    }
    return 0;
}
// ==== End of main =============================================================


// ======= getDate =============================================================
// Description:
// This function prompts the user to keep entering a date while date is invalid.
// Validity is determined by return of isDateValid function.
// 
// Input:
// Passed today object by reference from main
// User input of day into today object
// 
// Output:
// Updates today value with valid user entered day
// =============================================================================
void getDate(Date& today) {

    // Display header for user input
    cout << "\nEnter todays date in the following order:\n";
    cout << "MM/DD/YYYY, (Month, Day, Year).\n\n";

    // Prompt for input while input is invalid
    do {
        
        // Prompt input
        cout << "Month: ";
        cin >> today.month;
        
        cout << "Day: ";
        cin >> today.day;
        
        cout << "Year: ";
        cin >> today.year;

    }  while (!isDateValid(today));
}
// ======= End of getDate =====================================================


// ======= isDateValid =============================================================
// Description:
// This function returns true false wether user entered date in getDate function
// is valid based on given paremeters. If valid it returns so, if invalid it
// displays Invalid input before returning false.
// 
// Input:
// Copy of user entered object today
// 
// Output:
// Returns true false bool if today object is valid
// =============================================================================
bool isDateValid(Date today) {
    bool valid = true;

    // Check if today month is valid
    if (today.month <= 0 || today.month >= 13) {
        
        // Update valid return boolean
        valid = false;
    }

    // Check if today day is valid
    else if (today.day <= 0 || today.month >= 31) {
        valid = false;
    }

    // Check if today year is valid
    else if (today.year <= 2019 || today.year >= 9999) {
        valid = false;
    }

    // If input is invalid display invalid input
    if (!valid) {
        cout << "\nInvalid Input\n\n";
    }

    return valid;
}
// ======= End of isDateValid =====================================================


// ======= addOneDay =============================================================
// Description:
// This function adds one day to the given day. If any container overflows, the
// next container is incremented. Ex if day overflows to 31 month is incremented one
// 
// Input:
// Current today object to add a day to
// 
// Output:
// Input object plus one day
// =============================================================================
void addOneDay(Date& today) {
    const int monthSize = 30;

    // Increment day by one
    today.day += 1;

    // After increment if day is bigger than month
    if (today.day > monthSize) {

        // Increment month
        today.month++;

        // Set days over month size to object day
        // This is done if day needs to be incremented by more than one
        today.day = today.day - monthSize;
    }
    
    // Check if month is greater than months in a year
    if (today.month == 13) {
        
        // Increment year and set month to 1
        today.month = 1;
        today.year++;
    }
}
// ======= End of addOneDay =====================================================


// ======= displayTommorow =============================================================
// Description:
// This function displays the day calculated in addOneDay function. Displayed date
// is in MM/DD/YYYY notation with 0 fill.
// 
// Input:
// Date object tommorow
// 
// Output:
// Displays tommorow's date to user
// =============================================================================
void displayTommorow(Date tommorow) {

    // Display header
    cout << "\nAfter adding one day to today's date, tommorow's date is ";

    // Display date
    cout << setw(2) << setfill('0') << tommorow.month;
    cout << "/" << setw(2) << setfill('0') << tommorow.day;
    cout << "/" << setw(4) << setfill('0') << tommorow.year << "\n\n";
}
// ======= End of displayTommorow =====================================================


/* ================================== Output ===================================

Enter todays date in the following order:
MM/DD/YYYY, (Month, Day, Year).

Month: 1
Day: 20
Year: 2020

After adding one day to today's date, tommorow's date is 01/21/2020

Do it again? (Y/N): y

Enter todays date in the following order:
MM/DD/YYYY, (Month, Day, Year).

Month: 1
Day: 30
Year: 2020

After adding one day to today's date, tommorow's date is 02/01/2020

Do it again? (Y/N): y

Enter todays date in the following order:
MM/DD/YYYY, (Month, Day, Year).

Month: 12
Day: 30
Year: 2020

After adding one day to today's date, tommorow's date is 01/01/2021

Do it again? (Y/N): y

Enter todays date in the following order:
MM/DD/YYYY, (Month, Day, Year).

Month: 13
Day: 10
Year: 2020

Invalid Input

Month: 12
Day: 30
Year: 2020

After adding one day to today's date, tommorow's date is 01/01/2021

Do it again? (Y/N): n
==================================== Output ===================================*/