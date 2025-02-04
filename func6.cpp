#include <iostream>
using namespace std;

// First way
int find_gcd(int num1, int num2) {
    int divisor = num1;

    while (num1 % divisor != 0 || num2 % divisor != 0) {
        divisor--;
    }
    return divisor++;
}

int find_gcd(int num1, int num2) {
    int remainder = 1;
    int result = 0;
    int smaller;
    int larger;

    while (remainder != 0) {
        if (num1 < num2) {
            num1 = smaller;
            num2 = larger;
        }
        else {
            num1 = larger;
            num2 = smaller;
        }

        remainder = larger % smaller;
        //////// Didnt finsih this way

    }
}

int main () {
    int num1 = 0;
    int num2 = 0;
    int gcd;

    cout << "Enter two positive numbers:\n";
    cin >> num1 >> num2;

    while (num1 < 0 || num2 < 0) {
        cout << "Enter two positive numbers:\n";
        cin >> num1 >> num2;
    }

    gcd = find_gcd(num1, num2);
    cout << "GCD is " << gcd;
}