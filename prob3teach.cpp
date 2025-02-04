#include <iostream>
using namespace std;

string revString(const string& s) {

    string res = "";
    
    for (int i = 0; i < s.length(); i++) {
        res = s[i] + res;
    }
    return res;
}

int main() {
    string s;
    cout << "Enter: ";
    getline(cin, s);
    cout << revString(s) << endl;
}