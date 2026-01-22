#include<iostream>
#include<vector>
using namespace std;

void Reverse(vector<int>& arr,int start,int end){
    while(start<=end){
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start++;
        end--;
    }
}

int main(){
    int n ;
    cout << "Enter size of an array :";
    cin >> n ;
    
    vector<int> arr(n);
    cout << "Enter elements in an array :\n";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    cout << "Current array :";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    int places;
    cout <<"\nEnter the number of left places you want to rotate the array :";
    cin >> places;
    places = places % n; 
    
    Reverse(arr, 0, places - 1);
    Reverse(arr, places, n - 1);
    Reverse(arr, 0, n - 1);

    cout << "\nLeft rotated array by " << places << " places :";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
