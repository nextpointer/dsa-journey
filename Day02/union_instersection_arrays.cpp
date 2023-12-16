#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    unordered_set<int> findUnion(vector<int> &arr1, vector<int> &arr2) {
        unordered_set<int> newArr;
        // Insert all the elements of array1 and array2 into the unordered set
        for (int ele : arr1)
            newArr.insert(ele);
        for (int ele : arr2)
            newArr.insert(ele);

        return newArr;
    }

    unordered_set<int> findIntersection(vector<int> &arr1, vector<int> &arr2) {
        unordered_set<int> set1(arr1.begin(), arr1.end());  // Using constructor to initialize set1
        unordered_set<int> intersectionSet;

        for (int ele : arr2)
            if (set1.count(ele))  // Check if the element exists in set1
                intersectionSet.insert(ele);

        return intersectionSet;
    }
};

int main() {
    vector<int> arr1 = {1, 2, 3, 5, 6, 7, 8, 9};
    vector<int> arr2 = {2, 3, 4, 4, 4, 5, 8, 9, 7};
    Solution obj;

    unordered_set<int> newArr = obj.findUnion(arr1, arr2);
    unordered_set<int> newArr2 = obj.findIntersection(arr1, arr2);

    cout << "The Union of two arrays is: ";
    for (int num : newArr)
        cout << num << " ";
    cout << endl;

    cout << "The Intersection of two arrays is: ";
    for (int num : newArr2)
        cout << num << " ";

    return 0;
}
