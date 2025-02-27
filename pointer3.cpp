#include <iostream>
using namespace std;

void print(int* ptr, int size);

int main() {
    int size = 0;
    int* ptr = nullptr;
    
    cout << "Size of the Array: ";
    cin >> size;

    ptr = new int[size];

    for (int x = 0; x < size; x++) {
        cout << x + 1 << ": ";
        cin >> ptr[x];
    }

    print(ptr, size);

    delete[] ptr;

    return 0;
}

void print(int* ptr, int size) {
    for (int x = 0; x < size; x++) {
        cout << ptr[x] << " ";
    }
    cout << endl;
}