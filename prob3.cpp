#include <iostream>
#include <string>
using namespace std;

string getSubstr(string s, int i, int j) {
    string retVal = " ";
    while (i <= j) {
        retVal += s[i++];
    }
    return retVal;
}

bool noRepChar (string s) { // why with j are we checking before i (no repititions possible before the target char)
    char targetChar;
   
    for (int i = 0; i < s.length(); i++) {
        targetChar = s[i];
        
        for (int j = 0; j < s.length(); j++) {
            
            if (i != j and targetChar == s[j]) {
                return false;
            }
        }
    }
    return true;
}

void printLongestSub(string str) {
    string maxLenStr = "";

    for (int start = 0; start < str.length(); start++) {
       
        for (int end = start; end < str.length(); end++) {
            string substr = getSubstr(str, start, end);
            
            if (noRepChar(substr)) {
                
                if (substr.length() > maxLenStr.length()) {
                    maxLenStr = substr;
                }
            }
        }
    }
    cout << "longest substring is: " << maxLenStr << ", with len of: " << maxLenStr.length() - 1;
}

int main() {
    
    string s;
    cout << "Enter string: ";
    cin >> s;
    printLongestSub(s);
    
    return 0;
}







