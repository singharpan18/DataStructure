#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool canConstruct (string r, string m){
    vector<int> freq(26, 0);

    for(char c : m){
        freq[c - 'a']++;
    }

    for(char c : r){
        freq[c - 'a']--;
        if(freq[c - 'a'] < 0){
            return false;
        }
    }
    return true;
}

int main(){ 
    string ransomNote, magazine;
    cout << "Enter ransomNote string: ";
    cin >> ransomNote;
    cout << "Enter magazine string: ";
    cin >> magazine;
    if(canConstruct(ransomNote, magazine))
        cout << "True" << endl;
    else
        cout << "False" << endl;    
    return 0;        
}
