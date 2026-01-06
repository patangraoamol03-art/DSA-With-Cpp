#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Enter size of an array: ";
    cin >> size;

    vector<int> arr1(size);
    cout << "\nEnter elements of an array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }

    unordered_map<int, int> hash;
    for (int i = 0; i < size; i++) {
        hash[arr1[i]]++;
    }

    int search;
    cout << "\nEnter how many elements you want to search: ";
    cin >> search;

    vector<int> arr2(search);
    cout << "\nElements you want to search in array:" << endl;
    for (int i = 0; i < search; i++) {
        cin >> arr2[i];
        cout << arr2[i] << " Appears " << hash[arr2[i]] << " times" << endl;
    }

    return 0;
}
