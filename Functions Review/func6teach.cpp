#include <iostream>
using namespace std;

int find_gcd(int x, int y) {
    while (x != 0) {
        int temp = x;
        x = y % x;
        y = temp;
    }
    return y;
}

int find_gcd_rec(int x, int y) {
    if (x == 0) {
        return y;
    }
    return find_gcd_rec(y % x, x);
}

int main() {
    int x , y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << find_gcd(x, y) << endl; 
    cout << find_gcd_rec(x, y) << endl;

}