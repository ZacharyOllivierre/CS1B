#include <iostream>
using namespace std;

void fill(int* ptr, int size);

int main() {
    const int size = 20;
    int array[size];
    int* ptr = array;

    fill(ptr, size);

    for (int x = 0; x < size; x++) {
        cout << ptr[x] << " ";
    }

    return 0;
}

void fill(int* ptr, int size) {
    for (int x = 0; x < size; x++) {
        ptr[x] = x;
    }
}