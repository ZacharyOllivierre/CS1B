#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void readArray(char a[4][4]) {
    ifstream f("grid.txt");
    
    for (int i = 0; i < 4; i++) {
        
        for (int j = 0; j < 4; j++) {
            f >> a[i][j];
        }
    }
    f.close();
}

void printArray(char a[4][4]) {
    for (int i = 0; i < 4; i++) {
        
        for (int j = 0; j < 4; j++) {
            cout << a[i][j];
        }
        cout << endl;
    }
}

void findRestOfTheWordInRow(string w, char a[4][4], int r, int c, int step, int edge) {
    int wordIndex = 0;
    int i = c;
    
    while(i != edge) {
        
        if (w[wordIndex] != a[r][i]) {
            break;
        }
        if (wordIndex == w.length() - 1) {
            cout << "Found starting at row, col: " << r << " " << c << endl;
        }
        wordIndex++;
        i += step;
    }
}

void findRestOfTheWordInCol(string w, char a[4][4], int r, int c, int step, int edge) {
    int wordIndex = 0;
    int i = r;
    
    while(i != edge) {
        
        if (w[wordIndex] != a[i][c]) {
            break;
        }
        if (wordIndex == w.length() - 1) {
            cout << "Found starting at row, col: " << r << " " << c << endl;
        }
        wordIndex++;
        i += step;
    }
}

void findWord(string w, char a[4][4]) {
    for (int r = 0; r < 4; r++) {
        for (int c = 0; c < 4; c++) {
            if (a[r][c] == w[0]) {
                findRestOfTheWordInRow(w, a, r, c, 1, 4);
                findRestOfTheWordInRow(w, a, r, c, -1, -1);
                findRestOfTheWordInCol(w, a, r, c, 1, 4);
                findRestOfTheWordInCol(w, a, r, c, -1, -1);
            }
        }
    }
}

int main() {

    char a[4][4];
    readArray(a);
    printArray(a);
    string word;
    
    cout << "Enter a word: ";
    cin >> word;
    
    findWord(word, a);


}