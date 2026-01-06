#include<iostream>
#include<vector>
using namespace std;

int longestPalindrome(string s){
    vector<int> f (26, 0);

    for(char c : s){
        f[c - 'a']++;
    }
    int length = 0;
    bool oddFound = false;
    for(int count : f ){
        if(count % 2 == 0){
            length += count;
        }else{
            length += count -1;
            oddFound = true;
        }
    }

    if(oddFound)
        length += 1;

    return length;
}

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    int n = longestPalindrome(s);
    cout << "Longest palindrome length formed from the string: " <<  n;
}
