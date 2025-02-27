#include <iostream>
using namespace std;

void swap(int* ptrX, int* ptrY);

int main() {
    int x = 10;
    int y = 20;
    int* ptrX = &x;
    int* ptrY = &y; 

    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;

    swap(ptrX, ptrY);

    cout << "X is " << x << endl;
    cout << "Y is " << y << endl;

    return 0;
}

void swap(int* ptrX, int* ptrY) {
    int temp;
    
    cout << "Swapping" << endl;
    temp = *ptrX;
    *ptrX = *ptrY;
    *ptrY = temp;
}