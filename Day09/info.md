## Date - [07-01-24]

## Topic Name

Array

## Todays Goal

* Merge 2 sorted arrays without using Extra space

## Code

### Merge 2 sorted arrays without using Extra space

#### Two Pointer Approch

##### Code

```
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
```

* Time Complexity : O((n+m) log(n+m))
* Space Complexity: O(1)
