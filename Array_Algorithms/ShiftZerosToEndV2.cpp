#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter size of an array :";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter elements of an array with some zero elements:" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    cout << "\nCurrent array :";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    int index = 0;   
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    while(index < n) {
        arr[index] = 0;
        index++;
    }

    cout << "\nArray with zero at the end of the array :";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
