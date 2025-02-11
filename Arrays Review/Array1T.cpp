#include <iostream>
using namespace std;

void printArray(float arr[10]) {
    for (int x = 0; x < 10; x++) {
        cout << arr[x] << ", ";
    }
    cout << endl;
}

void shiftArray(float arr[10], int x) {
    int i = 0;
    int sourceIndex = 0;

    while (i < 10) {
        int destIndex = (sourceIndex + x) % 10;
        float temp = arr(destIndex);
        arr[destIndex] = temp;
        sourceIndex = destIndex;
        i++;
    }
    
    
    
    float tempNum = arr[(9 + x) % 10];

    for (int i = 9; i > 0; i--) {
        int index = (i + x) % 10;
        arr[index] = arr[i];
    }

    int index = ((9 + x) % 10 + x) % 10;
    arr[index] = tempNum;
}

int main() {
    float arr [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x;

    cout << "Enter a number (shift) : ";
    cin >> x;

    printArray(arr);
    shiftArray(arr, x);
    printArray(arr);

    return 0;
}