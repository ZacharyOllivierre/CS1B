#include <iostream>
#include <fstream>
using namespace std;

void readArray(int a[5]) {
    ifstream f("inversion.txt");
    for (int i = 0; i < 5; i++) {
        f >> a[i];
    }
    f.close();
}

void printArray(int a[5]) {
    
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
}

int countInversions(int a[5]) {
    int count = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (a[i] > a[j]) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int a[5];
    readArray(a);
    // printArray(a);
    int c = countInversions(a);
    cout << c << endl;
}