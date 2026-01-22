#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int n;
    cout << "Enter size of an array :";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter elements in array :\n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    cout << "Current array :\n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    set<int> usa;
    for(int i=0;i<n;i++){
        usa.insert(arr[i]);

    }
    
    cout << "\nUnique element in an array are : ";
    for(int x : usa){
        cout << x << " ";
    }
    return 0;
}
