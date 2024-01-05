## Date - [05-01-24]

## Topic Name

Array

## Todays Goal

* find duplicate in an array of N+1 Integers

## Code

### find duplicate in an array of N+1 Integers

```
class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        for (int i = 0; i < arr.size(); i++)
        {
            int pos =abs(arr[i]);
            if(arr[pos]<0)
                return pos;

            arr[pos]=arr[pos]*-1;

        }
        // No duplicate found (you may want to handle this case based on your requirements)
        return -1;
    }
};
```

* Time Complexity: O(1)
* Space Complexity:O(1)
