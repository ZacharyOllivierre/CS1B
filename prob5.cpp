#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void outputGrid(int gridSize, char grid[4][4]) {
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridSize; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
    // Backwards
    cout << endl;
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridSize; j++) {
            cout << grid[j][i];
        }
        cout << endl;
    }
}

int find(int gridSize, char grid[4][4], string word) {

    int length = word.length();
    bool match;

    // Accross
    for (int y = 0; y < gridSize; y++) {
        

        for (int x = 0; x < gridSize; x++) {
            match = true;

            // Offset
            for (int j = 0; j < gridSize - length; j++) {
                if (word[x + j] != grid[])
                //????????????????????????????????
            }
        }
    }
}

int main() {

    // Data
    const int gridSize = 4;
    char grid[gridSize][gridSize];
    string word;

    // Open file / Load array
    ifstream f("grid.txt");
    for (int i = 0; i < gridSize; i++) {
        for (int j = 0; j < gridSize; j++) {
            f >> grid[i][j];
        }
    }
    f.close();

    // User Input
    cout << "Enter word to search for: ";
    cin >> word;

    // Find or not
    find(gridSize, grid, word);

    // Output
    // outputGrid(gridSize, grid);

    return 0;
}