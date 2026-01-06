#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int digit = 0 ;
    int rev = 0 ;
    while (n > 0) {
        digit = n % 10;
        n /= 10;
        rev = rev*10 + digit ;
    }
    cout << "\nREVERSED NUMBER IS  :\n" << rev ;
    return 0;
}
