#include<bits/stdc++.h>
using namespace std;

class Sorting {
public:
    void insertionSort(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++) {
            int j = i;
            int temp = arr[i];
            while (j > 0 && arr[j - 1] > temp) {
                arr[j] = arr[j - 1];
                j--;
            }
            arr[j] = temp;
        }
    }
};

int main(int argc, char const* argv[]) {
    vector<int> arr = {5, 4, 9, 2, 1};
    Sorting obj;
    obj.insertionSort(arr);
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
