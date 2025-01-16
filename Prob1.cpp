#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string s = "aaaabbbbcccc";
    string output = "";
    int i = 0;

    while (i < s.length()) {
        char ch = s[i++];
        int counter = 1;
        
        while (i < s.length() and s[i] == ch) {
            counter++;
            i++;
        }
        output += ch;
        output += to_string(counter);
    }
    cout << output << endl;
    return 0;
}
