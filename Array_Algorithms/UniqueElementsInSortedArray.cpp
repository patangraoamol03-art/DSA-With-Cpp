#include<iostream>
#include<vector>
using namespace std;

int Partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int j = high;
    int i = low;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }

        if (i < j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void QuickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pIndex = Partition(arr, low, high);
        QuickSort(arr, low, pIndex - 1);
        QuickSort(arr, pIndex + 1, high);
    }
}

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
    
    QuickSort(arr, 0, arr.size() - 1);
    
    int cvalue = arr[0];
    vector<int> Uarr;
    Uarr.push_back(arr[0]); 
    
    for(int i=1;i<n;i++){
        if(cvalue!=arr[i]){
            Uarr.push_back(arr[i]);
            cvalue=arr[i];
        }
    }
    cout << "\nUnique element in an array are : ";
    for(int x : Uarr){
        cout << x << " ";
    }
    return 0;
}
