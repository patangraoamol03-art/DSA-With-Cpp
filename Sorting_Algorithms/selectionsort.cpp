#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int>& arr, int n) {
  

    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if(minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int n;
    cout << "Enter your size of an array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements of an array:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    SelectionSort(arr,n);

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "\n";
    }

    return 0;
}
