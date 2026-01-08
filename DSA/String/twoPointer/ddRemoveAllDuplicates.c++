#include<iostream>
#include<string>
using namespace std;

string removeAllDuplicates(string s) {
    bool seen[256] = {false};
    int j = 0;

    for (int i = 0; i < s.size(); i++) {
        unsigned char c = s[i];
        if (!seen[c]) {
            seen[c] = true;
            s[j++] = c;
        }
    }
    s.resize(j);
    return s;
}


int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << removeAllDuplicates(s);
    return 0;
}
