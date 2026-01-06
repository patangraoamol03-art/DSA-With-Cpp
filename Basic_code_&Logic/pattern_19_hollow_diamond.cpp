#include <iostream>

using namespace std;

void pat1(int n) {
    int fspace = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        for (int j = 0; j < fspace; j++) {
            cout << " ";
        }

        for (int j = 1; j <= n - i; j++) {
            cout << "*";
        }

        fspace += 2;
        cout << endl;
    }
}

void pat2(int n) {
    int space = 2 * n - 2;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        for (int j = 0; j < space; j++) {
            cout << " ";
        }

        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        space -= 2;
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    pat1(n);
    pat2(n);

    return 0;
}
