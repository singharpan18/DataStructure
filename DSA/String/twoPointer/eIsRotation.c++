#include <iostream>
#include <string>
using namespace std;

// Purpose:
// Checks whether s2 is a rotation of s1.
// Logic:
// If s2 is a rotation of s1, then s2 must be a substring of (s1 + s1).
bool isRotation(string s1, string s2) {

    // Rotation is possible only if both strings have the same length
    if (s1.size() != s2.size())
        return false;

    // Doubled string contains all possible rotations of s1
    string doubled = s1 + s1;

    // Check if s2 exists inside the doubled string
    // find() internally uses pointer comparison logic
    //npos means “not found”, Anything else means “found”
    return doubled.find(s2) != string::npos;
}

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    if (isRotation(s1, s2))
        cout << "Yes, it is a rotation";
    else
        cout << "No, it is not a rotation";

    return 0;
}
