#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void MergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) {
        return;
    }

    int mid = (low + high) / 2;
    MergeSort(arr, low, mid);
    MergeSort(arr, mid + 1, high);
    Merge(arr, low, mid, high);
}

int main() {
    int n;
    cout << "Enter size of an array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements of an array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    MergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
