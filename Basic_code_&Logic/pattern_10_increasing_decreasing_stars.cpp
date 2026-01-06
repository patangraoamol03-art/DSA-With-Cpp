#include <iostream>

using namespace std;

int main() {
    int n ;
    cout << "Enter a Number: -" ;
    cin >> n ;
   for(int i = 0 ; i < n ; i++){
       for(int j = 0 ; j < i ; j++){
           cout << "*" ;
       }
       cout << endl ;
   }
      for(int i = 0 ; i < n ; i++){
       for(int j = n-i ; j > 0 ; j--){
           cout << "*" ;
       }
       cout << endl ;
   }
    return 0;
}
