#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter a string: ";
    cin >> name;

    int search;
    cout << "\nEnter number of queries: ";
    cin >> search;

    int hasharray[256] = {0};
    for (int i = 0; name[i] != '\0'; i++) {
        hasharray[name[i]] += 1;
    }

    char arr2[search];
    cout << "\nCharacters you want to search in array:" << endl;

    for (int i = 0; i < search; i++) {
        cin >> arr2[i];
        cout << arr2[i] << " Appears " << hasharray[arr2[i]] << " times\n";
    }

    return 0;
}
