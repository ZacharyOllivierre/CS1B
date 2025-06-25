// Lab Code 9876
// Zachary Ollivierre
#include <iostream>
using namespace std;

// Function Declaration
int arraySum(int array[], int size);

int main() {

    // Declaring Variables
    int array[] = {1, 2, 3, 4, 5, 6};

    // Output Sum
    cout << arraySum(array, 6) << endl;
    
    return 0;
}

// Function Call
// Input
// array and size
//
// Output
// returns array at index and array sum of index - 1
//
int arraySum(int array[], int size) {
    if (size == 0) {
        return 0;
    }
    return array[size - 1] + arraySum(array, size - 1);
}

// Output
// 21
// End of output