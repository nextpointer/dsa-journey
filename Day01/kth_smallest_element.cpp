#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (arr[j] > arr[j+1]) {
                    swap(arr[j], arr[j+1]);
                }
            }
        }
    }

    int findKthSmallest(vector<int>& arr, int k) {
        bubbleSort(arr);
        int smallest_element = arr[k - 1];
        return smallest_element;
    }
};

int main() {
    cout << "Input the Kth position: ";
    int k;
    cin >> k;
    vector<int> arr = {-58, 58, 4, 2, 1};
    Solution obj;
    cout << "The " << k << "th smallest number is " << obj.findKthSmallest(arr, k) << endl;
    return 0;
}
