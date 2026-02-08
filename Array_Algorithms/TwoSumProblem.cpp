#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of an array : ";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter elements in the array : " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
  
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
    int k;
    cout << "\nEnter the sum to check for two elements : ";
    cin >> k;
 
    int sum =0 ;
    for( int i = 0; i < n ; i++ ){
        for(int j = i+1 ; j<n ;j++){
            sum = arr[i] + arr[j];
            if(sum==k){
                cout << "\nYES";
                return 0;
                
            }
        }
    }
    
    cout << "\nNO";
    return 0;
}
    
