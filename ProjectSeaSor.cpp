#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

const int size = 20;

// Sorts
void bubbleSort(int array[size]);
void selectionSort(int array[size]);

// Searches - Rely on printIndex and found
void linearSearch(const int array[size], int number);
void binarySearch(const int array[size], int number);

// Helper Functions
void fillArray(int array[size]);                // Fills Array with random or sorted values (menu driven)
void printArray(const int array[size]);         // Prints Array (Spaces on top + bottom)
void printIndex(int index[size], int found);    // Takes index cards FROM SEARCHES; reads out found values
void lines(int length);

int main() {
    // Variables
    int array[size];
    int input;
    int index;
    bool running = true;
    int textLength = 29;
    int lineLength = 30;
    srand(time(nullptr));

    do {
        // Title
        lines(lineLength);
        cout << endl << setw(textLength) << left << "SEARCH AND SORTS" << "|\n"; 
        lines(lineLength); 
        
        // Menu
        cout << endl << setw(textLength) << "Home Menu" << "|\n";
        cout << setw(textLength) << "1. Fill Array" << "|\n";
        cout << setw(textLength) << "2. Print Array" << "|\n";
        cout << setw(textLength) << "3. Bubble Sort" << "|\n";
        cout << setw(textLength) << "4. Selection Sort" << "|\n";
        cout << setw(textLength) << "5. Linear Search" << "|\n";
        cout << setw(textLength) << "6. Binary Search" << "|\n";
        cout << setw(textLength) << "7. Exit" << "|\n";
        lines(lineLength);

        // Input + Validation
        cout << "\nEnter (1 - 7): ";
        cin >> input;
        while (input < 1 || input > 7) {
            cout << "Enter (1 - 6): ";
            cin >> input;
        }

        // Function Guide
        switch (input) {
            case 1: // Fill Array
                fillArray(array);
                printArray(array);
                break;
            
            case 2: // Print Array
                printArray(array);
                break;
            
            case 3: // Bubble Sort
                bubbleSort(array);
                printArray(array);
                break;
            
            case 4: // Selection Sort
                selectionSort(array);
                printArray(array);
                break;

            case 5: // Linear Search
                cout << "Enter number to search for: ";
                cin >> input;
                linearSearch(array, input);
                break;

            case 6: // Binary Search
                cout << "Enter number to search for: ";
                cin >> input;
                selectionSort(array);
                binarySearch(array, input);
                break;
            
            case 7: // Exit
                running = false;
            default:
                running = false;
        }
    } while(running);
    return 0;
}

void bubbleSort(int array[size]) {
    int temp;
    bool sorted = false;
    int switches;

    while (!sorted) {
        switches = 0;
        
        for (int x = 0; x < size; x++) {
    
            if (array[x] > array[x + 1]) {
                temp = array[x + 1];
                array[x + 1] = array[x];
                array[x] = temp;
                switches++;
            }
        }
        if (switches == 0) {
            sorted = true;
        }
    }
}

void linearSearch(const int array[size], int number) {
    int index[size];
    int found = 0;
    for (int x = 0; x < size; x++) {
        if(number == array[x]) {
            index[found] = x;
            found++;
        }
    }
    if (found == 0) {
        cout << number << " was not found.\n\n";
    }
    else {
        printIndex(index, found);
    }
}

void binarySearch(const int array[size], int number) { // Does not find all indexs (bc of break)
    int found = 0;
    int index[size];
    int middle;
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        middle = (end + start) / 2;
        
        if (array[middle] == number) {
            index[found] = middle;
            found++;
            break;
        }
        else if (number > array[middle]) {
            start = middle + 1;
        }
        else {
            end = middle - 1;
        }
    }
    if (found == 0) {
        cout << number << " was not found.\n\n";
    }
    else {
        printIndex(index, found);
    }
}

void printArray(const int array[size]) {
    cout << "\n";
    // Small Print
    if (size < 75) {
        cout << setw(10) << "Values: ";
        for (int x = 0; x < size; x++) {
            cout << setw(4) << array[x] << " ";
        }
        cout << endl << setw(10) << "Index: ";
        for (int x = 0; x < size; x++) {
            cout << setw(4) << x << " ";
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

void fillArray(int array[size]) {
    int input = 0;
    cout << endl << "Fill Array Menu\n";
    lines(20);
    cout << "\n1. Random Array\n2. Sorted Array\n";
    lines(20);
    cout << "\nEnter (1 - 2): ";
    cin >> input;

    // Input Validation
    while (input != 1 && input != 2) {
        cout << "Enter: ";
        cin >> input;
    }
    switch (input) {
        case 1:
            for (int x = 0; x < size; x++) {
                array[x] = rand() % size + 1;
            }
            cout << "\nRandom Array:\n";
            break;
        
        case 2:
            for (int y = 0; y < size; y++) {
                array[y] = (y * 2);
            }
            cout << "\nSorted Array (Even):\n";
            break;
        default:
            cout << "\nError\n";
    }
}

void selectionSort(int array[size]) {
    int sorted = 0;
    int temp;
    int largest;
    int largestIndex;

    for (int x = 0; x < size - 1; x++) {
        largest = array[0];
        largestIndex = 0;
        for (int y = 0; y < size - sorted; y++) {

            if (array[y] > largest) {
                largest = array[y];
                largestIndex = y;
            }
        }
        temp = array[largestIndex];
        array[largestIndex] = array[size - 1 - sorted]; 
        array[size - 1 - sorted] = temp;
        sorted++;
    }
}

void lines(int length) {
    for (int x = 0; x < length; x++) {
        cout << "-";
    }
}

void printIndex(int index[size], int found) {
    cout << "\nFound at index(s): ";
    for (int x = 0; x < found; x++) {
        cout << index[x] << " ";
    }
    cout << endl;

    // Fill index with 0
    for (int x = 0; x < found; x++) {
        index[x] = 0;
    }
}