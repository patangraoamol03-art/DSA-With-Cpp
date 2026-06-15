#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s) {
    stack<char> s1;

    int i = 0;
    while (s[i] != '\0') {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            s1.push(s[i]);
        } else {
            if (s1.empty()) {
                return false;
            }

            if (s[i] == ')' && s1.top() == '(') {
                s1.pop();
            } else if (s[i] == '}' && s1.top() == '{') {
                s1.pop();
            } else if (s[i] == ']' && s1.top() == '[') {
                s1.pop();
            } else {
                return false;
            }
        }
        i++;
    }

    return s1.empty();
}

int main() {
    string s;

    cout << "Enter the parentheses string: ";
    cin >> s;

    if (isValid(s)) {
        cout << "Valid Parentheses" << endl;
    } else {
        cout << "Invalid Parentheses" << endl;
    }

    return 0;
}
