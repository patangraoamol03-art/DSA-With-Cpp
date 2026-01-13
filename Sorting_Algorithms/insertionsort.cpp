#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector<int>& arr, int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j;

        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > key) {
                arr[j + 1] = arr[j];
            } else {
                break;
            }
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Enter your size of an array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements of an array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    InsertionSort(arr, n);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
