#include <iostream>
using namespace std;

// recursive version
int sum_range(int x, int y, int z) {    // z is a dummy parameter for function overloading
    if (x == y) {
        return x;
    }
    return x + sum_range(x + 1, y, 0);
}

int sum_range(int x, int y) {
    int res = 0;
    for (int i = x; i <= y; i++) {
        res += i;
    }
    return res;
}

int main() {
    
    int x, y;
    
    cout << "Enter two numbers: " << endl;
    cin >> x >> y;
    cout << sum_range(x,y) << endl;
    cout << sum_range(x,y,0) << endl;

}