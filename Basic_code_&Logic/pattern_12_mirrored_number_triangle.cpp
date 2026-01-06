#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    int limit = 2 * (n - 1);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        for (int j = 1; j <= limit; j++) {
            cout << " ";
        }

        for (int j = i; j >= 1; j--) {
            cout << j;
        }

        cout << endl;
        limit -= 2;
    }

    return 0;
}
