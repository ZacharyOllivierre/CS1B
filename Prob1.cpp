#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    
    // Vars
    string content = "";
    string line = "";
    string output = "";
    string fileName = "";
    int length = 0;
    int x = 0;
    char ch;
    int counter;

    // Input
    cout << "Enter file name: ";
    cin >> fileName;

    ifstream file(fileName);
    if (!file.is_open()) {
        cout << endl << "File " << fileName << " failed to open.";
        return 1; 
    }

    while (getline(file, line)) {
        content += line;  
    }
    
    length = content.length();
    if (length <= 0) {
        cout << endl << "File is empty.";
        return 1;
    }

    // Proc
    while (x < length) {
        ch = content[x++];
        counter = 1;

        while (x < length && ch == content[x]) {
            counter += 1;
            x++;
        }
        output += ch;
        output += to_string(counter);
    }

    // Output
    cout << output << endl;

    return 0;
}







