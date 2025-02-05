#include <iostream>
using namespace std;

bool isPerfectNumber(int n);

int main() {
    // Data
    int input;
    bool perfect;

    // Input
    cout << "Enter a number: ";
    cin >> input;

    // Process
    perfect = isPerfectNumber(input);

    // Output
    if (perfect) {
        cout << input << " is a perfect number." << endl;
    }
    else {
        cout << input << " is not a perfect number." << endl;
    }

    return 0;
}

bool isPerfectNumber(int n) {
    int sum = 0;
    bool perfect = false;

    for (int x = 1; x < n; x++) {
        if (n % x == 0) {
            sum += x;
        }
    }

    if (sum == n) {
        perfect = true;
    }
    return perfect;
}