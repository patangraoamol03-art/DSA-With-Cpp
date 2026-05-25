#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string s = "";

        string str1 = strs[0];
        string str2 = strs[1];

        for(int i = 0; i < min(str1.length(), str2.length()); i++) {

            if(str1[i] == str2[i]) {
                s += str1[i];
            }
            else {
                break;
            }
        }

        for(int i = 2; i < strs.size(); i++) {

            string temp = strs[i];
            string str = "";

            int j = 0;

            while(j < s.length() && j < temp.length()) {

                if(s[j] == temp[j]) {
                    str += s[j];
                    j++;
                }
                else {
                    break;
                }
            }

            s = str;
        }

        return s;
    }
};

int main() {

    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);

    cout << "Enter strings:\n";

    for(int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    Solution obj;

    cout << "Longest Common Prefix: "
         << obj.longestCommonPrefix(strs);

    return 0;
}
