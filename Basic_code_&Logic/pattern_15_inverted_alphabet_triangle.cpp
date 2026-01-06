#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        char alpha = 'A';
        for (int j = n; j >= i; j--) {
            cout << alpha << " ";
            alpha++;
        }
        cout << endl;
    }
    return 0;
}
