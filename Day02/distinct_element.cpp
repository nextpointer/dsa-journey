#include <iostream>
#include <vector>
#include<unordered_set>
using namespace std;

class Solution {
public:
    // brute force soln:
    // int findDistinct(vector<int>& arr) {
    //     int n = arr.size();
    //     int count = 0;

    //     for(int i=0;i<n;i++)
    //     {
    //         bool isDistinct =true;
    //         for(int j=0;j<i;j++)
    //         {
    //             if(arr[i]==arr[j])
    //                 isDistinct=false;
    //                 break;
    //         }

    //     // Check distinct or not 
    //     if(isDistinct)
    //         count++;
    //     }
    //     return count;
    // }


    int findDistinct(vector<int>& arr) {
        unordered_set<int> distinctElements;
        
        // Use a for-each loop to insert elements into the unordered_set
        for (int num : arr) {
            distinctElements.insert(num);
        }
        
        return distinctElements.size();
    }
};

int main() {
    vector<int> arr = {1, 2, 5, 1, 6, 7};
    Solution obj;
    cout << "The count of distinct elements in the array is " << obj.findDistinct(arr);
    return 0;
}
