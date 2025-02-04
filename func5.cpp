// Write a function named find_threshold that takes a single integer "target" and returns the smallest positive integer n such that the sum of integers from 1 to n is greater than or equal to "target". For example:
// cout << find_threshold(8) << endl; 
// // will output 4 because 1+2+3+4 = 10, which is >= 8
// cout << find_threshold(15) << endl; 
// // will output 5 because 1+2+3+4+5 = 15
// cout << find_threshold(-5) << endl; 
// // will output 1 because the smallest value n=1

#include <iostream>
using namespace std;

int find_threshold(int target);

int sum_of(int target);

// Recursive attempt
int find_threshold(int target, int z) {
    
}

int main() {
    int target;
    int output;

    cout << "Enter target value: ";
    cin >> target;

    output = find_threshold(target);
    output =find_threshold(target, 0);

    cout << "Lowest num is " << output << endl;
}


int find_threshold(int target) {
    int result = 0;

    for (int x = 1; x < target; x++) {
        
        if (sum_of(x) > target || sum_of(x) == target) {
            result = x;
            break;
        }
    }
    return result;
}

int sum_of(int target) {
    int result = 0;

    for (int x = 0; x <= target; x++) {
        result += x;
    }

    return result;
}