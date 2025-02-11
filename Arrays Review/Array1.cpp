#include <iostream>
#include <iomanip>
using namespace std;

void rotate_array_right(float array[20]);

int main() {
    int size = 20;
    float array[20];

    for (int x = 0; x < size; x++) {
        array[x] = x - 10;
    }

    cout << "OG array: " << endl;
    for (int x = 0; x < size; x++) {
        cout << setw(5) << array[x] << " ";
    }

    rotate_array_right(array);

    // output
    cout << "\nNew array: " << endl;

    for (int x = 0; x < size; x++) {
        cout << setw(5) << array[x] << " ";
    }
    
    cout << endl;

    return 0;
}

void rotate_array_right(float array[20]) {
    float last = array[19];

    for (int x = 19; x > 0; x--) {
        array[x] = array[x-1];
    }
    
    array[0] = last;
}