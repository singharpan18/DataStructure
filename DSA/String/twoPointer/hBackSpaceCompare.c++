#include <iostream>
#include <string>
using namespace std;

bool backSpaceCompare(string s, string t) {
    // initialize pointers -> as backspace affects previous character, we will scan from right to left
    int i = s.size() - 1,  j = t.size() - 1;
    int skipS = 0, skipT = 0;
    while (i >= 0 || j >= 0) {
        // processing string s
        while (i >= 0) {
            // When # is found, so we increase skipS. // Nothing is deleted yet — we just remember a deletion is coming
            if (s[i] == '#') {
                skipS++;
                i--;
            }
            // When a normal character is found and skipS > 0 // This character is deleted by a previous #
            // So we ignore it by i-- and reduce skipS
            else if (skipS > 0) {
                skipS--;
                i--;
            }
            // Valid character found
            else {
                break;
            }
        }
        while (j >= 0) {
            if (t[j] == '#') {
                skipT++;
                j--;
            }
            else if (skipT > 0) {
                skipT--;
                j--;
            }
            else {
                break;
            }
        }
        // Compare characters: If both characters exist and they are not equal, then strings can never match → return false
        if (i >= 0 && j >= 0 && s[i] != t[j])
            return false;
        // Length mismatch check: One string still has characters and the other does not
        if ((i >= 0) != (j >= 0)) return false;
        // Move both pointers after comparison
        i--;
        j--;
    }

    // All characters matched
    return true;
}

int main() {
    string s, t;
    cout << "Enter the two strings: ";
    cin >> s >> t;

    cout << backSpaceCompare(s, t);
    return 0;
}
