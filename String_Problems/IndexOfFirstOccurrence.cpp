#include <iostream>
#include <string>
using namespace std;

int strStr(string haystack, string needle) {
    unsigned int i = 0;

    while (haystack[i] != '\0') {
        unsigned int j = i;
        unsigned int k = 0;

        while (haystack[j] == needle[k] || needle[k] == '\0') {
            if (needle[k] == '\0') {
                return (j - needle.length());
            }

            k++;
            j++;
        }

        i++;
    }

    return -1;
}

int main() {
    string haystack, needle;

    cout << "Enter haystack: ";
    getline(cin, haystack);

    cout << "Enter needle: ";
    getline(cin, needle);

    int result = strStr(haystack, needle);

    cout << "Result: " << result << endl;

    return 0;
}
