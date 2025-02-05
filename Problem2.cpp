#include <iostream>
using namespace std;

int digit(int number, int n);

int main() {
    // Data
    int number;
    int n;
    int output;

    // Input
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the number digit to output: ";
    cin >> n;

    // Process
    output = digit(number, n);

    // Output
    if (output != -1) {
        cout << "Digit is " << output << "." << endl;
    }
    else {
        cout << "Number does not contain enough digits." << endl;
    }
    
    return 0;
}

int digit(int number, int n) {
    int temp = number;
    int numDigits = 0;

    while (temp > 0) {
        temp = temp / 10;
        numDigits++;
    }

    if (numDigits < n) {
        return -1;
    }

    for (int x = 0; x < numDigits - n; x++) {
        number = number / 10;
    }
    
    number = number % 10;
    return number;
}