#include <iostream>

using namespace std;

void pat1(int n) {
     for (int i = 1; i <= n ; i++) {
       for (int j = 0 ; j <= n -i - 1 ; j++){
           cout << ' ' ;
       }
    for (int j = 1 ; j <= 2*i -1 ; j++){
           cout << "*" ;
       }
    for (int j = 1 ; j <= n -i ; j++){
           cout << ' ' ;
       }
       cout << endl ;
    }
}

void pat2(int n){
     
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
}
int main() {
    int n ;
    cout << "Enter a Number: -" ;
    cin >> n ;
    pat1(n);
    pat2(n);
    return 0;
}
