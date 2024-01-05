#include<bits/stdc++.h>
using namespace std;
// Editable Array--1st Approch(sorting)
// class Solution{
//     public:
//     int findDuplicate(vector<int>&arr){
//         sort(arr.begin(),arr.end());
//         for (int i = 0; i <=arr.size() ; i++)
//         {
//            if(arr[i]==arr[i+1])
//            {
//                 return arr[i];
//            }
//         }
//         return -1;
//     }
// };

// Editable Array --2nd approch(Hashing)
// class Solution {
// public:
//     int findDuplicate(vector<int>& arr) {
//         unordered_set<int> newSet;

//         for (int num : arr) {
//             if (newSet.count(num) > 0) {
//                 // Found the duplicate
//                 return num;
//             } else {
//                 newSet.insert(num);
//             }
//         }

//         // No duplicate found (you may want to handle this case based on your requirements)
//         return -1;
//     }
// };

// Editable Array--3rd approch(Marking Negative)
class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++)
        {
            int pos =abs(arr[i]);
            if(arr[pos]<0)
                return pos;

            arr[pos]=arr[pos]*-1;

        }
        // No duplicate found (you may want to handle this case based on your requirements)
        return -1;
    }
};






int main(int argc, char const *argv[])
{
    vector<int>arr={1,3,3,4,2};
    Solution obj;
    int duplicateNum=obj.findDuplicate(arr);
    cout<<"Duplicate Number is "<<duplicateNum<<endl;
    return 0;
}
