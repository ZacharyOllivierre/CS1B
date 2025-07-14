#include "Presidents.h"
#include <iostream>
#include <iomanip>
using namespace std;

// Default Constructor
Presidents::Presidents() {
    
    // Set everything to 0
    number = 0;
    name = "";
    quote = "";
}

// Destructor 
Presidents::~Presidents() {
    cout << "\nCalling Presidents Destructor\n";
}

// Set Number function
void Presidents::setNumber(int number) {
    
    this->number = number;
}

// Set name function
void Presidents::setName(string name) {
    
    this->name = name;
}

// Set quote function
void Presidents::setQuote(string quote) {
    
    this->quote = quote;
}

// Display this presidents information
void Presidents::display() {
    cout << endl << name << ", " << number << "th president, said:\n\t'" << quote << "'" << endl;    
}