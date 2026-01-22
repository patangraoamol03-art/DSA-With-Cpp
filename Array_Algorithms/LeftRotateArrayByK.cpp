#include<iostream>
#include<vector>
using namespace std;

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
    
    vector<int> temp(places);
    for(int i=0;i<places;i++){
        temp[i]=arr[i];
    }
    for(int i=places;i<n;i++){
        arr[i-places]=arr[i];
    }
    for(int i=0;i<places;i++){
        arr[n-places+i]=temp[i];
    }
    cout << "\nLeft rotated array by " << places << " places :";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
