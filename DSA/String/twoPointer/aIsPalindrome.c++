#include <iostream>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    int left = 0,  right = s.size() - 1;

    while(left < right){
        if(!isalnum(s[left])){
            left++;
        }else if (!isalnum(s[right])){
            right--;
        } else{
            if(tolower(s[left]) != tolower(s[right]))
                return false;
            left++;
            right--;    
        }
    }
    return true;
}

int main() {
    string s;
    cout << "Enter the string: ";
    getline(cin, s);

    cout << isPalindrome(s);
    return 0;
}
