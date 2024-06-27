#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    int findEquilibirium(vector<int> arr, int size)
    {
        if (size == 1)
        {
            return 1;
        }
        int leftSum = 0;
        int totalSum = 0;
        // calculate the total sum
        for (int i = 0; i < size; i++)
        {
            totalSum += arr[i];
        }
        // now the logic
        for (int i = 0; i < size; i++)
        {
            
            totalSum -= arr[i];
            // if leftSum == totalSum then there is a equilibirum point
            if (totalSum == leftSum)
            {
                return i + 1;
            }
            // now update the leftSum
            leftSum += arr[i];
        }
        return -1;
    }
};




int main(int argc, char const *argv[])
{
    vector<int> arr = {15,0,9,6};
    Solution obj;
    int size = arr.size();
    int position = obj.findEquilibirium(arr, size);
    cout << "The first Equilibirium Point is " << position << endl;

    return 0;
}
