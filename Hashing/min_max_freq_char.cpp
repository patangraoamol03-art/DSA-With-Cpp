#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <climits>
using namespace std;

int main() {
    string name;
    cout << "Enter a string: ";
    cin >> name;

    
    unordered_map<char,int> hash;
    for (char c : name) {  
        hash[c]++;
    }

    char maxkey , minkey ;
    int min = INT_MAX , max = 0 ;
    for(auto it : hash){
        if(it.second>max){
            max = it.second ;
            maxkey = it.first ;
        }
          if(it.second<min){
            min = it.second ;
            minkey = it.first ;
        }
    }
    
    cout << "Element with max frequency is: " << maxkey 
     << " (" << max << " times)\n";
    cout << "Element with min frequency is: " << minkey 
     << " (" << min << " times)\n";
    return 0;
}
