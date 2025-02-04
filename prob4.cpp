// Write a function called sum_range that accepts two integers,
// "start" and "end"
// , and
// returns the sum of all integers between these two values, including both endpoints. For
// example:
// Input: 3, 6, output: 18 because 3+4+5+6 = 18
// Input: -2, 2, output: 0 because (-2)+(-1)+0+1+2 = 0


#include <iostream>
using namespace std;

int sumRange(int start, int end);

int main() {
    
    int start;
    int end;
    int result;

    cout << "Enter start number: ";
    cin >> start;
    cout << "Enter end number: ";
    cin >> end;

    result = sumRange(start, end);
    cout << "Result is: " << result << endl;

}

int sumRange(int start, int end) {
    int result = 0;

    for (int x = start; x <= end; x++) {
        result += x;
    }

    return result;
}

