#include <bits/stdc++.h>
using namespace std;

int characterReplacement(string s, int k) {
    vector<int> freq(26, 0);   

    int left = 0,  maxFreq = 0,  maxLen = 0;            

    for (int right = 0; right < s.size(); right++) {
        //Count characters
        freq[s[right] - 'A']++;
        //Find most frequent character        
        maxFreq = max(maxFreq, freq[s[right] - 'A']);
        //Calculate required replacements, If replacements > k → shrink window
        while ((right - left + 1) - maxFreq > k) {
            // Remove left character to reduce window size, Too many characters need replacement — not allowed.”
            //the only option is to remove characters**
            freq[s[left] - 'A']--;
            left++;   // shrink window from left
        }

        // window is valid here → update answer,Save maximum valid window length
        maxLen = max(maxLen, right - left + 1);
    }

    return maxLen;
}

int main() {
    string s;
    int k;

    cout << "Enter string (uppercase letters): ";
    cin >> s;

    cout << "Enter k (max replacements): ";
    cin >> k;

    cout << "Longest length after replacement: "
         << characterReplacement(s, k);

    return 0;
}
