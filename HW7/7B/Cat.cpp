#include "Cat.h"
#include <iostream>
using namespace std;

// Set weight function
void Cat::setWeight(int weight) {
    this->weight = weight;
}

// Set color function
void Cat::setColor(string color) {
    this->color = color;
}

// Set name function (Extra but simplifies process)
void Cat::setName(string name) {
    this->name = name;
}

// Displays this cat's info
void Cat::displayInfo() {
    
    // Display to user
    cout << name << " weighs " << weight << " pounds and is " << color << ".\n";
}

// Display ..meow
void Cat::meow() {
    cout << name << " says: " << "MEOW!" << endl;
}