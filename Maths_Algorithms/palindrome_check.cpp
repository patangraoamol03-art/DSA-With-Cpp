#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int org = n;
    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    if (rev == org)
        cout << "IT IS PALINDROME";
    else
        cout << "NOT A PALINDROME";

    return 0;
}
