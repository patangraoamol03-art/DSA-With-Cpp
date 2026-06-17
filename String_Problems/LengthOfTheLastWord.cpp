#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int i = s.length() - 1;

    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    int len = 0;

    while (i >= 0 && s[i] != ' ') {
        len++;
        i--;
    }

    return len;
}

int main() {
    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Length of last word: " << lengthOfLastWord(s) << endl;

    return 0;
}
