#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

const int size = 30;

// Function Declarations
void fillFile();
void fillArray(int array[size]);
void printArray(int array[size]);



int main() {
    int array[size];
    srand(time(nullptr));

    fillFile();
    fillArray(array);
    printArray(array);

    return 0;
}

void fillFile() {
    ofstream outFile("file.txt");
    int array[size];

    if (outFile.is_open()) {
        for (int x = 1; x <= size; x++) {
            array[x - 1] = rand() % size;
            outFile << setw(6) << left << array[x - 1] << " ";
            
            if (x % 10 == 0) {
                outFile << endl;
            }
        }
    } 
    else {
        cout << "File Error" << endl;
    }
    // Index List
    outFile << endl;
    for (int x = 0; x < size; x++) {
        outFile << "Index " << x << ": " << array[x] << endl;
    }
    outFile.close();
}

void fillArray(int array[size]) {
    ifstream inFile("file.txt");
    if (inFile.is_open()) {
        for (int x = 0; x < size; x++) {
            inFile >> array[x];
        }
        inFile.close();
    }
    else {
        cout << "Array Fill Error" << endl;
    }
}

void printArray(int array[size]) {
    cout << "\n";
    // Small Print
    if (size < 75) {
        cout << left << setw(6) << "Values" << ": ";
        for (int x = 0; x < size; x++) {
            cout << setw(3) << array[x] << " ";
        }
        cout << endl << setw(6) << "Index" << ": ";
        for (int x = 0; x < size; x++) {
            cout << setw(3) << x << " ";
        }
        cout << endl << endl;
    }
    else {
        // Large Print
        for (int x = 0; x < size; x++) {
            cout << "Index " << x << ": " << array[x] << endl;
        }
        cout << endl;
    }
}