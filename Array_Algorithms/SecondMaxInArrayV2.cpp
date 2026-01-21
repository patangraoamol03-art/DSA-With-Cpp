#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxVal = arr[0];
    int maxIndex = 0;
    int secondMaxVal = INT_MIN;
    int secondMaxIndex = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            secondMaxVal = maxVal;
            secondMaxIndex = maxIndex;
            maxVal = arr[i];
            maxIndex = i;
        } 
        else if (arr[i] < maxVal && arr[i] > secondMaxVal) {
            secondMaxVal = arr[i];
            secondMaxIndex = i;
        }
    }

    if (secondMaxVal == INT_MIN) {
        cout << "Second maximum does not exist\n";
    } else {
        cout << "Second maximum number in the array is "
             << secondMaxVal << " at index " << secondMaxIndex << endl;
    }

    return 0;
}
