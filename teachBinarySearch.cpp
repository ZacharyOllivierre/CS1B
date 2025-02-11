#include <iostream>
using namespace std;

void fillArray (int array[1000]) {
    for (int x = 0; x < 1000; x++) {
        array[x] = x;
    }
}

int binarySearch(int x, int a[1000], int start, int end, int size = 1000) {
    int mid = (start + end) / 2;
   
    if (start > end) {
        return -1;
    }

    if (x > a[mid]) {
        return binarySearch(x, a, mid + 1, end);
    } else if (x < a[mid]){
        return binarySearch(x, a, start, mid - 1);
    } else {
        return mid;
    }
}

int main () {
    int a[1000];
    int x;
    int numOfComparisons;
    int index;
    fillArray(a);

    while(true) {
        numOfComparisons = 0;
        cout << "\nEnter a num: ";
        cin >> x;
        index = binarySearch(x, a, 0, 999, 1000);
        if (index >= 0) {
            cout << "Number found at index " << index << endl;
        }
        else {
            cout << "Number not found" << endl;
        }
        cout << "Num of comparisons was " << numOfComparisons;
        
    }

}
// int binSearch(int x, int a[], int& numOfComparisons, int size) {
//     int start = 0;
//     size = 1000;
//     int end = size - 1;
    
//     while (start <= end) {
//         int mid = (start + end) / 2;

//         if (x == a[mid]) {
//             return mid;
//         } else if (x > a[mid]) {
//             start = mid + 1;
//         }
//         else {
//             end = mid - 1;
//         }
//         numOfComparisons++;
//     }
//     return -1;
// }   
