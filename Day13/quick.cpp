#include <bits/stdc++.h>
using namespace std;

class Sorting
{
public:
    void QuickSort(vector<int> &arr, int start, int end)
    {
        // base case
        if (start >= end)
            return;

        // Partition
        int p = Partition(arr, start, end);

        // recursive case

        // Sorting the left side
        QuickSort(arr, start, p - 1);
        // Sorting the right side
        QuickSort(arr, p + 1, end);
    }

    int Partition(vector<int> &arr, int start, int end)
    {
        // take a pivot element
        int pivot = arr[start];
        int count = 0;
        // start counting how many elements are smaller and equal to pivot ele
        for (int i = 0; i < arr.size(); i++)
        {
            if (pivot >= arr[i])
                count++;
        }
        // put the right position of pivot ele
        int pivotIndex = start + count - 1; // Adjusting the pivotIndex calculation
        swap(arr[start], arr[pivotIndex]);

        // now left-->smaller and right-->larger
        int i = start, j = end;
        while (i <= j)
        {
            while (arr[i] < pivot)
            {
                i++;
            }
            while (arr[j] > pivot)
            {
                j--;
            }
            if (i <= j)
            {
                swap(arr[i++], arr[j--]);
            }
        }

        return pivotIndex;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> arr = {5, 4, 9, 2, 1};
    Sorting obj;
    obj.QuickSort(arr, 0, arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
