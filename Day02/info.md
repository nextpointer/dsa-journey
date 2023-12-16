## Date - [16-12-23]

## Topic Name

Hashing

## Todays Goal

* Distinct element Finding
* Find the Union and Intersection of the two sorted arrays.

## Code

### Distinct element Finding

##### Brute Force Solution

```
    //brute force soln:
    int findDistinct(vector<int>& arr) {
        int n = arr.size();
        int count = 0;

        for(int i=0;i<n;i++)
        {
            bool isDistinct =true;
            for(int j=0;j<i;j++)
            {
                if(arr[i]==arr[j])
                    isDistinct=false;
                    break;
            }

        // Check distinct or not 
        if(isDistinct)
            count++;
        }
        return count;
    }
```

* Time Complexity -> O(n^2)
* Space Complexity-> O(1)

##### Efficient Solution:

```
    int findDistinct(vector<int>& arr) {
        unordered_set<int> distinctElements;
    
        // Use a for-each loop to insert elements into the unordered_set
        for (int num : arr) {
            distinctElements.insert(num);
        }
    
        return distinctElements.size();
    }
```

* Time Complexity -> O(n) -->for only insert the elements into set
* Space Complexity-> O(1)
