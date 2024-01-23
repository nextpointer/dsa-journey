#include <bits/stdc++.h>
using namespace std;

void reverseStr(vector<char> &arr, int k) {
    int n = arr.size();
    for (int start = 0; start < n; start += 2*k) {
        int endPointer = min(start + k - 1, n - 1);
        reverse(arr.begin() + start, arr.begin() + endPointer + 1);
    }
}

void PrintArray(vector<char> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
}

int main(int argc, char const *argv[]) {
    vector<char> arr = {'s', 'u', 'r', 'o', 'j', 'i', 't'};
    int k = 2;
    reverseStr(arr, k);
    PrintArray(arr);

    return 0;
}
