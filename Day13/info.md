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

#### Quick Sort

```
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
```

* Time Complexity:O(nlogn)
* Space Complexity:O(n)

#### Selection Sort

```
class Sorting
{
public:
    // Function to perform Selection Sort on a vector of integers
    void selectionSort(vector<int>& arr){
        // Loop through each element in the array
        for (int i = 0; i < arr.size(); i++)
        {
            // Assume the current index is the minimum
            int min = i;

            // Iterate through the unsorted part of the array to find the minimum element
            for (int j = i + 1; j < arr.size(); j++)
            {
                // If an element is smaller than the current minimum, update the minimum
                if(arr[min] > arr[j])
                    min = j;
            }

            // Swap the current element with the minimum element found
            swap(arr[i], arr[min]);
        }
    }
};
```

Time Complexity : O(n^2)

Space Complexity : O(1)
