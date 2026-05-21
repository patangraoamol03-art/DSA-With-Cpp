#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of an array : ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter elements of an array (0,1,2) :" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int low = 0 , mid = 0 , high = n - 1;

    while(mid<=high){

            if( arr[mid] == 0 ){
                int temp = arr[mid];
                    arr[mid] = arr[low];
                    arr[low] = temp;

                mid++;
                low++;
            }
            else if( arr[mid] == 1 ){
                mid++;
            }
            else{
                int temp = arr[mid];
                    arr[mid] = arr[high];
                    arr[high] = temp;
                high--;
            }

    }

    cout << "\nSorted array (0,1,2) :" << endl;
    for (int i = 0; i < n; i++) {
        cout <<  arr[i] << " " ;
    }


    return 0;
}
