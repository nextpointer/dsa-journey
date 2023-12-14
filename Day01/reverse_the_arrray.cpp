#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWord(string str) {
        int start = 0;
        int end = str.length() - 1; // Corrected the end index
        while (start < end) {  // Changed the condition to start < end
            swap(str[start], str[end]);
            start++;
            end--;
        }
        return str;
    }
};

int main() {
    cout << "Input a string: ";
    string str;
    cin >> str;

    Solution obj;
    cout << "Reversed string: " << obj.reverseWord(str) << endl;

    return 0;
}
