#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter number 1 for finding GCD: ";
    cin >> num1;
    cout << "Enter number 2 for finding GCD: ";
    cin >> num2;

    while (num1 > 0 && num2 > 0) {
        if (num1 > num2)
            num1 %= num2;
        else
            num2 %= num1;
    }

    cout << "GCD is " << (num1 == 0 ? num2 : num1);
    return 0;
}
