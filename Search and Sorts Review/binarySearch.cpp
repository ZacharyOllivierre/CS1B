#include <iostream>
using namespace std;

void fillArray(int array[1000]);

void binarySearch(int array[1000], int number);

void printArray(int array[1000]);

int main() {
    int array[1000];
    int number;

    cout << "Enter a number to search for: ";
    cin >> number;

    
    fillArray(array);
    // printArray(array);
    binarySearch(array, number);


    return 0;
}

void fillArray(int array[1000]) {
    for (int x = 0; x < 1000; x++) {
        array[x] = x;
    }
}

void binarySearch(int array[1000], int number) {
    int middle;
    int left = 0;
    int right = 1000;
    bool found = false;
    int comparisons = 0;
    int index = 0;

    while (!found) {
        middle = (left + right) / 2;

        if (array[middle] == number) {
            found = true;
            index = middle;
            comparisons++;
        }
        else if (number < array[middle]) {
            right = middle - 1;
            comparisons++;
        }
        else {
            left = middle + 1;
            comparisons++;
        }

        if (comparisons > 30) {
            cout << "Number not found!";
            break;
        }
    }

    if (found)
        cout << number << " found at index " << index << " with " << comparisons << " comparisons.";
}

void printArray(int array[1000]) {
    for (int x = 0; x < 1000; x++) {
        cout << array[x] << " ";
    }
}