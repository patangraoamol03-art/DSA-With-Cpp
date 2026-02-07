#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of an array :";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter elements in the array : " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
  
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    for(int i=0;i<n;i++){
        int temp = arr[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(temp==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout << "\nUnique is : " << arr[i];
        }
    }
    
    return 0;
}
