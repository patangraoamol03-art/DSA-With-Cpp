#include <iostream>
using namespace std;

int MaxLenOfTwoZeroSubArray(int arr[], int n) {
    int i = 0, j = 0;
    int ZeroCount = 0;
    int FirstZero = -1, SecondZero = -1;
    int CurrLen = 0, MaxLen = 0;

    while (j < n) {

        if (arr[j] != 0) {
            CurrLen++;
        }
        else if (ZeroCount == 0) {
            FirstZero = j;
            ZeroCount++;
            CurrLen++;
        }
        else if (ZeroCount == 1) {
            SecondZero = j;
            ZeroCount++;
            CurrLen++;

            if  (CurrLen > MaxLen) {
                MaxLen = CurrLen;
            }
        }
        else if (ZeroCount == 2) {

            i = FirstZero + 1;

            FirstZero = SecondZero;
            SecondZero = j;

            CurrLen = j - i + 1;

            if (CurrLen > MaxLen) {
                MaxLen = CurrLen;
            }
        }

        j++;
    }

    return MaxLen;
}

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements : \n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Maximum length subarray with exactly 2 zeros if the exits is  = "
         << MaxLenOfTwoZeroSubArray(arr, n) << endl;

    return 0;
}
