#include<iostream>
#include<vector>
using namespace std;

void RecursiveInsertionSort(vector<int>& arr,int n,int i){
  if(i>=n){
      return ;
  }
  
  int key = arr[i];
  int j = i-1;
  while(j >= 0 && arr[j] > key){
      arr[j+1]=arr[j];
      j--;
  }
  arr[j+1]=key;
  RecursiveInsertionSort(arr,n,i+1);
}


int main(){
    int n;
    cout << "Enter size of an array :";
    cin >> n;
    
    vector<int> arr(n);
    cout <<"Enter elements of an array :" << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    RecursiveInsertionSort(arr,n,1);
    
    cout << "Sorted array :";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}
