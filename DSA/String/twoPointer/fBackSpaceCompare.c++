#include <iostream>
#include <string>
using namespace std;

string backSpaceCompare(string s, char ch) {
    int j = 0;
    for(int i = 0; i <s.size(); i++){
        if(s[i] != ch){
            s[j++] = s[i];
        }
    }
    s.resize(j);
    return s;
}

int main() {
    string s;
    char ch;
    cout << "Enter the strings: ";
    cin >> s ;
    cout << "Enter the char: ";
    cin >> ch;
    cout << backSpaceCompare(s, ch);
    return 0;
}
