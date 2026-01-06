#include <iostream>
using namespace std ;

int main() {
   int num1 , num2 ;
   cout << "Enter number 1 for finding GCD :" ;
   cin >> num1 ;
   cout << "Enter number 2 for finding GCD :" ;
   cin >> num2 ;
 
   int GCD = 0 ;
   for(int i=1 ; i<= min(num1,num2);i++){
       if(num1%i==0 && num2%i==0){
           GCD = i ;
       }
   }
   
   cout << "GCD is " << GCD ;
    return 0;
}
