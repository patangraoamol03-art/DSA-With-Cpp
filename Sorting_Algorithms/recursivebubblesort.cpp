#include <iostream>
#include <vector>
using namespace std;

void RecursiveBubbleSort(vector<int>& arr, int i, int j) {
    if (j == 0) {
        return;
    }

    if (i < j) {
        if (arr[i] > arr[i + 1]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        RecursiveBubbleSort(arr, i + 1, j);
    } else {
        RecursiveBubbleSort(arr, 0, j - 1);
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

    RecursiveBubbleSort(arr, 0, n - 1);

    cout << endl << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
