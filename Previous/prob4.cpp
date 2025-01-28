#include <iostream>
using namespace std;

int main() {
    int numInv = 0;
    int size = 5;
    int arr[size];

    // Input
    cout << "Enter a set of " << size << " numbers" << endl;

    for (int x = 0; x < size; x++) {
        cout << x + 1 << ": ";
        cin >> arr[x];
    }

    // Process
    for (int start = 0; start < size - 1; start++) {

        for (int j = start + 1; j < size; j++) {
            
            if (arr[start] > arr[j]) {
                numInv += 1;
            }
        }
    }

    // Output
    cout << "There were " << numInv << " inversions." << endl;

    return 0;
}