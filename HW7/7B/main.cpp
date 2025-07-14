// =============================================================================
// Attached: HW_7B
// File: HW_7B.pdf
// =============================================================================
//
// Programmer: Zachary Ollivierre
// Class: CS 1B
// Instructor: Med Mogasemi
//
// =============================================================================
// Program: Cat Class
// =============================================================================
// Description:
// This program declares three cats and gets the color and weight of each of them.
// Their color and weights are then displayed to the user along with a meow.
// =============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;


// ==== main ===================================================================
int main() {

    // Declaring variables
    const int numCats = 3;
    string catNames[numCats] = {"Fluffy", "Tom", "Kitty"};
    Cat** catArray = new Cat* [numCats];
    int num = 0;
    string line {};

    // Prompt user to enter information for each cat
    cout << "So you have three cats.\n";
    
    for (int x = 0; x < numCats; x++) {
        
        // Create cat object for cat
        catArray[x] = new Cat;

        // Set cat weight
        cout << "\nDescribe " << catNames[x] << ". What do they weigh: ";
        cin >> num;
        cin.ignore();
        catArray[x]->setWeight(num);

        // Set cat name
        catArray[x]->setName(catNames[x]);

        // Set cat color
        cout << "What color are they: ";
        getline(cin, line);
        catArray[x]->setColor(line);
    }

    // Display each cat's info
    cout << endl;
    for (int i = 0; i < numCats; i++) {
        catArray[i]->displayInfo();
    }

    // Have each cat meow
    cout << endl;
    for (int i = 0; i < numCats; i++) {
        catArray[i]->meow();
    }

    // Free memory
    for (int i = 0; i < numCats; i++) {
        delete catArray[i];
    }
    delete catArray;

    return 0;
}
// ==== End of main =============================================================


/* ================================== Output ===================================
So you have three cats.

Describe Fluffy. What do they weigh: 4
What color are they: Brown

Describe Tom. What do they weigh: 9
What color are they: Orange

Describe Kitty. What do they weigh: 5
What color are they: White

Fluffy weighs 4 pounds and is Brown.
Tom weighs 9 pounds and is Orange.
Kitty weighs 5 pounds and is White.

Fluffy says: MEOW!
Tom says: MEOW!
Kitty says: MEOW!
==================================== Output ===================================*/