#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    string name;
    cout << "Enter a string: ";
    cin >> name;

    int search;
    cout << "\nEnter number of queries: ";
    cin >> search;

    unordered_map<char,int> hash;
    for (char c : name) {  
        hash[c]++;
    }

    vector<char> arr2(search);
    cout << "\nCharacters you want to search in array:" << endl;
    for (int i = 0; i < search; i++) {
        cin >> arr2[i];
        cout << arr2[i] << " Appears " << hash[arr2[i]] << " times\n";
    }

    return 0;
}
