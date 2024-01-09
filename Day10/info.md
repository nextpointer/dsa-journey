## Date - [08-01-24]

## Topic Name

Array

## Todays Goal

* Merge 2 sorted arrays without using Extra space (Using Shell Sort)

## Code

### Merge 2 sorted arrays without using Extra space

#### Shell Sort Approch

##### Code

```
class Solution
{
private:
    void swapIfGreater(long long arr1[], long long arr2[], int index1, int index2)
    {
        if (arr1[index1] > arr2[index2])
        {
            swap(arr1[index1], arr2[index2]);
        }
    }

public:
    void mergeArray(long long arr1[], long long arr2[], int n, int m)
    {
        int len = n + m;
        int gap = (len / 2) + (len % 2);
        while (gap > 0)
        {
            for (int i = 0; i + gap < len; i++)
            {
                // Check if elements are in the first and second arrays
                if (i < n && i + gap >= n)
                {
                    swapIfGreater(arr1, arr2, i, i + gap - n);
                }
                // Check if elements are in the second array
                else if (i >= n && i + gap >= n)
                {
                    swapIfGreater(arr2, arr2, i - n, i + gap - n);
                }
                // Check if elements are in the first array
                else
                {
                    swapIfGreater(arr1, arr1, i, i + gap);
                }
            }

            if (gap <= 1)
            {
                break;
            }

            gap = (gap / 2) + (gap % 2);
        }
    }
};
```

* Time Complexity : O((n+m) log(n+m))
* Space Complexity: O(1)
