#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.size() != t.size()) return false;

    unordered_map<char, int> count;  // Hash map to track character frequency

    // Increment counts for characters in string s and decrement for string t
    for(int i = 0; i < s.size(); ++i) {
        count[s[i]]++;  // Increase count for s
        count[t[i]]--;  // Decrease count for t
    }

    // Check if all character frequencies are zero
    for(auto& entry : count) {
        if(entry.second != 0) return false;
    }

    return true;
}

int main() {
    string s, t;
    cout << "Enter the First String:" << endl;
    cin >> s;
    cout << "Enter the Second String:" << endl;
    cin >> t;
    
    bool result = isAnagram(s, t);
    cout << boolalpha << result << endl;  // Outputs true or false
    return 0;
}
