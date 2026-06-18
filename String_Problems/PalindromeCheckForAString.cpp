#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string s) {
    for (char &c : s) {
        c = tolower(c);
    }

    int j = 0;
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= '0' && s[i] <= '9')) {
            s[j] = s[i];
            j++;
        }
    }

    s.resize(j);

    int i = 0;
    int k = s.length() - 1;

    while (i < k) {
        if (s[i] != s[k]) {
            return false;
        }
        i++;
        k--;
    }

    return true;
}

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    if (isPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
