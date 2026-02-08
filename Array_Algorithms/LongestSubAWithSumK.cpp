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
    cout << "\nEnter the sum for length subarray : ";
    cin >> k;
    
    int start = 0, sum = 0, length = 0, SubLen = 0;

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
        length++;

        while(sum > k){
            sum = sum - arr[start];
            start++;
            length--;
        }
        
        if(sum == k && length > SubLen){
            SubLen = length;
        }
    }
    
    cout << "Length of longest sub array with sum " << k << " is " << SubLen;
    return 0;
}
    
    
    
