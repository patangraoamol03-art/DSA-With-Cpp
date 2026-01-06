#include <iostream>
using namespace std ;

int main() {
   int n ;
   cout << "Enter a number :" ;
   cin >> n ;
   
   int count = 0 ;
   for(int i=1 ; i*i <= n ; i++){
        if(n%i==0){
            count++ ;
            if(n/i != i ){
                count++ ;
            }
        }    

   }
        if(count== 2) {
            cout << "PRIME" ;
        }
        else
        cout << "NOT A PRIME" ;
    return 0;
}
