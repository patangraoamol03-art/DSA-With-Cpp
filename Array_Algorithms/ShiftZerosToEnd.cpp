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
    
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }
    for(int i=temp.size();i<n;i++){
        arr[i]=0;
    }
    cout << "\nArray with zero at the end of the array :";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
