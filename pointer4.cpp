#include <iostream>
using namespace std;

int high(int* ptr, int size);

void fill(int* ptr, int size);

int main() {
    int size = 0;
    int max = 0;
    int* ptr = nullptr;
    
    cout << "Size: ";
    cin >> size;

    ptr = new int[size];

    fill(ptr, size);
    max = high(ptr, size);

    cout << "Max is " << max << endl;

    delete[] ptr;

    return 0;
}

void fill(int* ptr, int size) {
    for (int x = 0; x < size; x++) {
        cout << x + 1 << ": ";
        cin >> ptr[x];
    }
}

int high(int* ptr, int size) {
    int max = *ptr;

    for (int x = 0; x < size; x++) {
        if (ptr[x] > max) {
            max = ptr[x];
        }
    }

    return max;
}