#include <bits/stdc++.h>
using namespace std;

string reverseWords(string str) {
    string newStr(str.length(), ' '); // Initialize newStr with the same size as the original string

    int j = 0;
    for (int i = str.length() - 1; i >= 0; i--) {
        newStr[j] = str[i];
        j++;
    }

    int start = 0;
    bool spaceFlag = false;  // Flag to track if consecutive spaces are encountered

    for (int end = 0; end <= str.length(); end++) {
        if (newStr[end] == ' ' || end == str.length()) {
            if (!spaceFlag) {
                reverse(newStr.begin() + start, newStr.begin() + end);
                start = end + 1;
            }
            spaceFlag = true;
        } else {
            spaceFlag = false;
        }
    }

    // Trim extra spaces
    int firstNonSpace = newStr.find_first_not_of(' ');
    int lastNonSpace = newStr.find_last_not_of(' ');

    if (firstNonSpace != string::npos && lastNonSpace != string::npos) {
        newStr = newStr.substr(firstNonSpace, lastNonSpace - firstNonSpace + 1);
    } else {
        newStr = "";
    }

    return newStr;
}

int main(int argc, char const *argv[]) {
    string str = "  hello    world  ";
    string newString = reverseWords(str);
    cout << newString << endl;

    return 0;
}
