#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter size of an array :";
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter elements of an array :" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    int Search;
    cout << "\nEnter element you want to search :";
    cin >> Search;
    
    bool found = false;
    int count = 0 ;
    for(int i=0;i<n;i++){
        if(arr[i]==Search){
            cout << Search << " is at " << i << " position " << endl ;
            found = true;
            count++;
        }
    }
    
    if (!found) {
        cout << Search << " not found in the array." << endl;
    }
    else {
        cout << "Total occurrences: " << count << endl;
    }

    
    return 0;
}
