#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    map<char, int> mp = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int num = 0;
    int i = 0;

    while (i < s.length()) {

        if (i < s.length() - 1 &&
            ((s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) ||
             (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) ||
             (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')))) 
        {
            num += (mp[s[i + 1]] - mp[s[i]]);
            i += 2;
        }
        else {
            num += mp[s[i]];
            i++;
        }
    }

    return num;
}

int main() {
    string s;

    cout << "Enter Roman Number: ";
    cin >> s;

    cout << "Integer Value: " << romanToInt(s) << endl;

    return 0;
}
