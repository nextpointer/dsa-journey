#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseArray(vector<int>& arr, int left, int right)
    {
        if (left < right)
        {
            swap(arr[left], arr[right]);
            reverseArray(arr, left + 1, right - 1);
        }
    }
};

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 2, 5};
    int left = 0;
    int right = arr.size() - 1;
    Solution obj;
    obj.reverseArray(arr, left, right);

    // Print the reversed array
    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}
