#include <iostream>
using namespace std;

// int find_threshold(int x) {
    
//     int sum = 0;
//     int i = 1;

//     while (sum > x) {
//         sum += i;
//         if (sum < x) {
//             i++;
//         }
//     }

//     return i;
// }

int find_threshold(int x, int i) {
    if (x <= 0) {
        return 0;
    }
    return 1 + find_threshold(x - i, i + 1);
}

int main() {
    cout << "Enter a number: ";
    int x;
    cin >> x;
    // cout << find_threshold(x) << endl;
    cout << find_threshold(x, 1) << endl;
}