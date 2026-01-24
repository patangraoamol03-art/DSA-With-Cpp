#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {

    srand(time(0));
    int randomnum = rand() % 100 + 1;
    int num;

    cout << "Enter your guess :" ;
    cin >> num;

    while(num != randomnum) {
        if(num > randomnum) {
            cout << "Guess is bigger\n";
        }
        else {
            cout << "Guess is smaller\n";
        }
        cout << "Enter your guess :" ;
        cin >> num;
    }

    cout << "RIGHT\n";
    return 0;
}
