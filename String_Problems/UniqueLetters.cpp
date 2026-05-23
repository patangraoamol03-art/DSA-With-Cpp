#include<iostream>
using namespace std;

int main(){
    string S;

    cout << "Enter a string: ";
    cin >> S;

    int count = S.length();

    for(int i = 0 ; i < S.length() ; i++){
        for(int j = i + 1 ; j < S.length() ; j++){
            if(S[i]==S[j]){
                count--;
                break;
            }
        }
    }

    cout << "Unique Elements in String: " << count;
    return 0;
}
