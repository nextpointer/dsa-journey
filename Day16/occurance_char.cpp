#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
    char MaximumOcuurrance(string str)
    {
        int arr[26] = {0};
        for (int i = 0; i < str.length(); i++)
        {
            char ch = str[i];
            int number = 0;
            number = ch - 'a';
            arr[number]++;
        }

        // find maximum occurrant chracter
        int maxi = -1, ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (maxi < arr[i])
            {
                ans = i;
                maxi = arr[i];
            }
        }

        return 'a' + ans;
    }
};

int main(int argc, char const *argv[])
{

    cout << "Enter your String " << endl;
    string str;
    cin >> str;

    Solution obj;
    cout << "Maximum Ocuurrant Chracter is : " << obj.MaximumOcuurrance(str);

    return 0;
}
