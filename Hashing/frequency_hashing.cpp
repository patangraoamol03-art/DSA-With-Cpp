#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of an array: ";
    cin >> size;

    int arr1[size];
    cout << "\nEnter elements of an array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }
    
    int max=0 ;
    for(int i = 0 ; i< size ; i++){
        if(arr1[i]>max){
            max = arr1[i] ;
        }
    }

    int search;
    cout << "\nEnter how many elements you want to search: ";
    cin >> search;

    int hasharray[max+1] = {0};
    for (int i = 0; i < size; i++) {
        hasharray[arr1[i]] += 1;
    }

    int arr2[search];
    cout << "\nElements you want to search in array:" << endl;

    for (int i = 0; i < search; i++) {
    cin >> arr2[i];
    if(arr2[i] >= 0 && arr2[i] <= max)
        cout << arr2[i] << " Appears " << hasharray[arr2[i]] << " times\n";
    else
        cout << arr2[i] << " Appears 0 times\n";
}


    return 0;
}
