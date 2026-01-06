#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "\nDigits in reverse order are:\n";
    while (n > 0) {
        int digit = n % 10;
        n /= 10;
        cout << digit << endl;
    }

    return 0;
}
