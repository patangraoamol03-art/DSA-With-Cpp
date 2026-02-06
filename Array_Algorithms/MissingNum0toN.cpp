#include <iostream>
#include<vector>
using namespace std;

int main() {
    
    int n;
    cout << "Enter the end number of the range :";
    cin >> n;
    
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
    cout << "Enter element within range : " ;
    cin >> arr[i];

    while (arr[i] < 0 || arr[i] > n) {
        cout << "Invalid! Enter again : ";
        cin >> arr[i];
      }
    
        bool duplicate;
      do {
         duplicate = false;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
               cout << "Repeated !! Enter again: ";
               cin >> arr[i];
                duplicate = true;
            break;
             }
           }
        }  while (duplicate);
      }
    
    
    cout << "\nYour input is :";
    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
    int sum =0 ;
    sum = (n*(n+1))/2;
    int ArrSum=0;
    for(int i=0;i<n;i++){
        ArrSum=ArrSum + arr[i];
    }
    int m = sum - ArrSum;
    
    cout << "\nMissing Number is : "<< m ;
    
    return 0;
}
