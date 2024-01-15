## Date - [15-01-24]

## Topic Name

Sorting

## Todays Goal

* Insertion sort
* Selection Sort
* Quick Sort

## Code

#### Insertion Sort

```
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
```

* Time Complexity: O(n^2)
* Space Complexity:O(1)
