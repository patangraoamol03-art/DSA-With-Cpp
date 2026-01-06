#include <iostream>

using namespace std ;

int main() {
  int n;
  cout << "Enter a number of rows :-" ;
  cin >> n ;
  
  for(int i=0 ; i < n ; i++){
      for(int j=n-i-1 ; j > 0 ; j-- ){
      cout << " " ;
      }
      
      char alpha = 'A' ;
      int breakpoint = (2*i+1)/2 ;
      for(int j = 0 ; j < 2* i + 1 ; j++){
          cout << alpha ;
          if( j < breakpoint) alpha++ ;
          else alpha-- ;
      }
      
      
      for(int j=n-i-1 ; j > 0 ; j-- ){
      cout << " " ;
      }
      cout << endl ;
  }
  
    return 0;
}
