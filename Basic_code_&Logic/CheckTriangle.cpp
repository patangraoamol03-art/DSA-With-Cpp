#include<iostream>
using namespace std;

int main() {

    int a, b, c;
    cout << "Enter the sides of the triangle :" << endl;
    cin >> a >> b >> c;

    if(a + b <= c || a + c <= b || b + c <= a) {
        cout << "Not a triangle";
    }
    else {
        cout << "It is a triangle";

        if(a == b && b == c) {
            cout << "\nEQUILATERAL";
        }
        else if(a == b || a == c || b == c) {
            cout << "\nISOSCELES";
        }
        else {
            cout << "\nSCALENE";
        }
    }

    return 0;
}
