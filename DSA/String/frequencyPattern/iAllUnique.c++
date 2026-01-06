#include<iostream>
#include<vector>
using namespace std;

bool allUnique(string s){
    vector<int> f (26, 0);

    for(char c : s){
        f[c - 'a']++;
        if(f[c - 'a'] > 1)
            return false;          
    }

    return true;
}

int main(){
    string s;
    cout << "Enter the string: ";
    cin >> s;
    cout << allUnique(s);
    return 0;
}
