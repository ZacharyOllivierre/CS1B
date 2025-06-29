// Prob 25 from HW on Pointers
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    // Declaring variables
    int size = 0;
    int* arrayPtr = nullptr;
    float average = 0;

    // Prompt user for input on size of array
    do {
        cout << "Enter size of integer array: ";
        cin >> size;
    } while (size < 1);

    // Allocate array
    arrayPtr = new int[size];

    // Prompt for input of array elements
    for (int i = 0; i < size; i++) {
        
        cout << "Element " << i + 1 << ": ";
        cin >> arrayPtr[i];

        // Add value to average
        average += arrayPtr[i];
    }

    // Calculate average of elements
    average = average / static_cast<float>(size);

    // Display mean to user
    cout << endl << "Mean of entered elements is " << fixed << setprecision(1) << average << "." << endl;

    // Free memory
    delete [] arrayPtr;

    return 0;
}

/* ================================== Output ===================================
Enter size of integer array: 5
Element 1: 1
Element 2: 3
Element 3: 6
Element 4: 4
Element 5: 2

Mean of entered elements is 3.2.
==================================== Output ===================================*/