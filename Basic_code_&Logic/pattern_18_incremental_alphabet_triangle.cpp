#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        char alpha = 'A' + (n - i - 1);
        for (int j = 0; j <= i; j++) {
            cout << alpha;
            alpha++;
        }
        cout << endl;
    }

    return 0;
}
