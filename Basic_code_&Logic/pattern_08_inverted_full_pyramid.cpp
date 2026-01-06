#include <iostream>

using namespace std;

int main() {
    int n ;
    cout << "Enter a Number of rows: -" ;
    cin >> n ;
    for (int i = 1; i <= n ; i++) {
       for (int j = 0 ; j <= i ; j++){
           cout << ' ' ;
       }
    for (int j = 2*(n - i) + 1 ; j > 0  ; j--){
           cout << "*" ;
       }
    for (int j = 0 ; j <= i ; j++){
           cout << ' ' ;
       }
       cout << endl ;
    }
    return 0;
}
