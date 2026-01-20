#include <iostream>
#include <vector>
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

int main() {
    int n;
    cout << "Enter size of an array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements of an array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    QuickSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
