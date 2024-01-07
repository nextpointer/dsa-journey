#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    void mergeArray(long long arr1[], long long arr2[], int n, int m)  {
        int i = n-1;
        int j = 0;

        while(i >= 0 && j < m) {
            if(arr1[i] >= arr2[j]) {
                swap(arr1[i], arr2[j]);
                i--;
                j++;
            }
            else {
                break;
            }
        }

        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
    }
};

void printArray(long long arr[], int size){
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    long long arr1[] = {10, 12};
    long long arr2[] = {5, 18, 20};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    Solution obj;
    obj.mergeArray(arr1, arr2, size1, size2);
    printArray(arr1, size1);
    printArray(arr2, size2);

    return 0;
}
