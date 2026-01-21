#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of an array : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements of an array :" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            cout << "Array is not sorted" << endl;
            return 0;
        }
    }

    cout << "Array is sorted" << endl;
    return 0;
}
