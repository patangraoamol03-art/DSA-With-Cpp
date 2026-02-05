#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter size of an 1st array: " ;
    cin >> n;
    
    vector<int> arr1(n);
    cout << "Enter elements of an 1st array: \n";
    for(int i=0;i<n;i++){
        cin >> arr1[i];
        for(int j=i ;j>0;j--){
           if(i>0 && arr1[j-1]>arr1[j] ){
            int temp = arr1[j];
            arr1[j] = arr1[j-1];
            arr1[j-1] = temp;
           }
      }
    }
    
    int m;
    cout << "Enter size of an 2nd array: " ;
    cin >> m;
    
    vector<int> arr2(m);
    cout << "Enter elements of an 2nd array: \n" ;
    for(int i=0;i<m;i++){
        cin >> arr2[i];
         for(int j=i ;j>0;j--){
           if(i>0 && arr2[j-1]>arr2[j] ){
            int temp = arr2[j];
            arr2[j] = arr2[j-1];
            arr2[j-1] = temp;
           }
      }
    }
    
    cout << "Elements in 1st array: ";
    for(int i=0;i<n;i++){
        cout << arr1[i] << " ";
    }
    
    cout << "\nElements in 2nd array: ";
    for(int i=0;i<m;i++){
        cout << arr2[i] << " ";
    }
    
    int i = 0, j = 0;
    vector<int> IntersecArr;
    
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            if (IntersecArr.empty() || IntersecArr.back() != arr1[i]) {
            IntersecArr.push_back(arr1[i]);
        }

        i++;
        j++;
        }
        else if( arr1[i]>arr2[j]){
            j++;
        }
        else{
            i++;
        }
    }


    cout << "\nIntersection is : " ;
    for(int i=0;i<IntersecArr.size();i++){
            cout << IntersecArr[i] << " ";
    }
     return  0;
}
