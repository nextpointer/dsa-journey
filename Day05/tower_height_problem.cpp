#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minimum_height_diff(vector<int>& arr, int k){
        int n = arr.size();
        sort(arr.begin(), arr.end());

        // Initialize the result with the difference between the heights of the first and last towers
        int result = arr[n - 1] - arr[0];

        // Iterate over each tower and consider increasing or decreasing its height by K
        for(int i = 0; i < n - 1; ++i){
            int max_height = max(arr[i] + k, arr[n - 1] - k);
            int min_height = min(arr[0] + k, arr[i + 1] - k);

            result = min(result, max_height - min_height);
        }

        return result;
    }
};

int main(int argc, char const *argv[]){
    vector<int> arr = {3, 9, 12, 16, 20};
    Solution obj;
    int height = obj.minimum_height_diff(arr, 3);
    cout << "Minimum height difference is " << height << endl;
    return 0;
}
