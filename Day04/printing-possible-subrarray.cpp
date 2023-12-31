#include <iostream>
#include <vector>

using namespace std;

void printSubarrays(const vector<int>& arr) {
    int n = arr.size();

    for (int start = 0; start < n; ++start) {
        int sum = 0;
        for (int end = start; end < n; ++end) {
            sum += arr[end];
            cout << "Subarray [";
            for (int i = start; i <= end; ++i) {
                cout << arr[i];
                if (i < end) {
                    cout << ", ";
                }
            }
            cout << "] Sum: " << sum << endl;
        }
    }
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    cout << "All possible subarrays:" << endl;
    printSubarrays(arr);
    return 0;
}

