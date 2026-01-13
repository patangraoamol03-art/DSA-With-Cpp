#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int>& arr, int n) {
    for(int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for(int j = 0; j < n - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if(!swapped) {
            break;
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

    BubbleSort(arr, n);

    cout << "Sorted array:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
