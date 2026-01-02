#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

bool canPermutePalindrome(string s) {
    vector<int> f(26, 0);

    // Count frequency (convert to lowercase)
    for (char c : s) {
        c = tolower(c);
        if (c >= 'a' && c <= 'z') {
            f[c - 'a']++;
        }
    }

    int oddCount = 0;
    for (int count : f) {
        if (count % 2 != 0)
            oddCount++;
    }

    //return oddCount <= 1;
    if(oddCount <= 1)
        return true;

    return false;   // ✅ MUST

}

int main() {
    cout << "Hello Arpan, Be your own sparkles!!" << endl;
    string s = "aba";
    cout << canPermutePalindrome(s);
}
