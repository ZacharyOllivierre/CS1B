#include <iostream>
#include <iomanip>
using namespace std;

// Global
const int size = 10;

// Declarations
void removeDupe(int array[size]);

void printArray(int array[size]);

int main() {
    // Data
    int array[size];

    // Input
    cout << "Enter values for array." << endl;
    for (int x = 0; x < size; x++) {
        cout << x + 1 << setw(4) << ":";
        cin >> array[x];
    }

    cout << "Your array is: " << endl;
    printArray(array);

    // Process
    removeDupe(array);

    
}

void removeDupe(int array[size]) {
    for (int x = 0; x < size; x++) {
        if (array[x] == array[x + 1])
    }
}

void printArray(int array[size]) {
    for (int x = 0; x < size; x++) {
        cout << setw(3) << array[x] << " ";
    }
    cout << endl;
}