// =============================================================================
// Attached: HW_7a
// File: HW_7a.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Presidents Class
// =============================================================================
// Description:
// This program prompts the user to enter 3 Presidents names, numbers, and
// a famous quote. These are then displayed back to the user
// =============================================================================

#include <iostream>
#include "Presidents.h"
using namespace std;

// ==== main ===================================================================
int main() {

    // Declare variables
    const int numPresidents = 3;
    Presidents** ptrArray = new Presidents* [numPresidents];
    int num {};
    string line {};

    // Prompt user for input for each object
    for (int i = 0; i < numPresidents; i++) {
        
        // Create Presidents object in pointer pointer array
        ptrArray[i] = new Presidents;

        // Get input
        cout << "Enter the " << i + 1 << " president's number: ";
        cin >> num;
        ptrArray[i]->setNumber(num);
        cin.ignore();

        cout << "Enter their name: ";
        getline(cin, line);
        ptrArray[i]->setName(line);

        cout << "Enter their quote: ";
        getline(cin, line);
        ptrArray[i]->setQuote(line);

        cout << endl;
    }

    // Output each president's info
    for (int x = 0; x < numPresidents; x++) {
        ptrArray[x]->display();
    }

    return 0;
}
// ==== End of main =============================================================


/* ================================== Output ===================================
Enter the 1 president's number: 37
Enter their name: Richard Nixon
Enter their quote: I am not a crook

Enter the 2 president's number: 45
Enter their name: Donald Trump
Enter their quote: And ... disinfectant, where it knocks it out in a minute

Enter the 3 president's number: 42
Enter their name: Bill Clinton
Enter their quote: I did not have sexual relations with that woman


Richard Nixon, 37th president, said:
        'I am not a crook'

Donald Trump, 45th president, said:
        'And ... disinfectant, where it knocks it out in a minute'

Bill Clinton, 42th president, said:
        'I did not have sexual relations with that woman'
==================================== Output ===================================*/