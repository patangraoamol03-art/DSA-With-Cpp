#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int org = n;
    int sum = 0;

    int temp = n;
    int count = 0;


    while (temp > 0) {
        count++;
        temp /= 10;
    }

  
    while (n > 0) {
        int digit = n % 10;
        n /= 10;

        int power = 1;
        for (int i = 1; i <= count; i++) {
            power *= digit;
        }

        sum += power;
    }

    if (sum == org)
        cout << "IT IS ARMSTRONG NUMBER";
    else
        cout << "NOT A ARMSTRONG NUMBER";

    return 0;
}
