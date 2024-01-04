#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleElement(int arr[], int N) {
        std::unordered_map<int, int> up;

        // Count the frequency of each element in the array
        for (int i = 0; i < N; ++i) {
            up[arr[i]]++;
        }

        // Find the unique element with frequency 1
        for (int i = 0; i < N; ++i) {
            if (up[arr[i]] == 1)
                return arr[i];
        }

        // If no unique element is found, you may want to handle this case appropriately.
        // For example, you could throw an exception, return a specific value, or print an error message.
        // Here, we return -1 as a placeholder for no unique element found.
        return -1;
    }
};

int main() {
    // Example usage
    int arr[] = {2, 3, 2, 3, 4, 5, 4};
    int N = sizeof(arr) / sizeof(arr[0]);

    Solution obj;
    int uniqueElement = obj.singleElement(arr, N);

    if (uniqueElement != -1) {
        std::cout << "The unique element is: " << uniqueElement << std::endl;
    } else {
        std::cout << "No unique element found." << std::endl;
    }

    return 0;
}
