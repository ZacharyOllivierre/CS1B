#include <iostream>
using namespace std;

int findMaxIn2DArray(int arr[5][5], int rows);

int main() {
    // Data
    int array[5][5];
    int rows;
    int max;

    // Input
    do {
        cout << "Enter number of rows: ";
        cin >> rows;
    } while (rows < 1 || rows > 5);
    cout << "Enter values for array one at a time." << endl;

    for (int y = 0; y < rows; y++) {
        cout << "Row: " << y + 1 << endl;
        
        for (int x = 0; x < 5; x++) {
            cout << "Column " << x + 1 << ": ";
            cin >> array[y][x];
        }
    }

    // Process
    max = findMaxIn2DArray(array, rows);

    // Output
    cout << "The highest number found in " << rows << " rows was " << max << endl;
    return 0;
}

int findMaxIn2DArray(int arr[5][5], int rows) {
    int max = arr[0][0];

    for (int y = 0; y < rows; y++) {

        for (int x = 0; x < 5; x++) {
            
            if (arr[y][x] > max) {
                max = arr[y][x];
            }
        }
    }

    return max;
}