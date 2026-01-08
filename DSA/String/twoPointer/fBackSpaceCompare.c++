#include <iostream>
#include <string>
using namespace std;

string backSpaceCompare(string s, char ch) {
    //j keeps track of the position where the next valid character should be placed
    //It represents the length of the new string being formed
    //Allows in-place modification without extra memory
    int j = 0;
    for(int i = 0; i <s.size(); i++){
        if(s[i] != ch){
            //Copy the current valid character to index j, Then increment j to point to the next free position
            //This shifts characters left, overwriting unwanted ones
            s[j++] = s[i];
        }
    }
    //Cuts the string length to j, Removes all characters after index j - 1
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
