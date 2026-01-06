#include <iostream>
#include <unordered_map>
#include <vector>
#include <climits>
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
    
  int maxFreq = 0, minFreq = INT_MAX;
  int maxElem, minElem;

for(auto it : hash){
    if(it.second > maxFreq){
        maxFreq = it.second;
        maxElem = it.first;
    }
    if(it.second < minFreq){
        minFreq = it.second;
        minElem = it.first;
    }
}

cout << "Element with max frequency is: " << maxElem 
     << " (" << maxFreq << " times)\n";
cout << "Element with min frequency is: " << minElem 
     << " (" << minFreq << " times)\n";

    return 0;
}
