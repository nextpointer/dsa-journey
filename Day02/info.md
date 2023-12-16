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

### Find the Union and Intersection of the two sorted arrays

#### Union:

```
unordered_set<int> findUnion(vector<int> &arr1, vector<int> &arr2) {
        unordered_set<int> newArr;
        // Insert all the elements of array1 and array2 into the unordered set
        for (int ele : arr1)
            newArr.insert(ele);
        for (int ele : arr2)
            newArr.insert(ele);

        return newArr;
    }
```

#### Intersection:

```
 unordered_set<int> findIntersection(vector<int> &arr1, vector<int> &arr2) {
        unordered_set<int> set1(arr1.begin(), arr1.end());  // Using constructor to initialize set1
        unordered_set<int> intersectionSet;

        for (int ele : arr2)
            if (set1.count(ele))  // Check if the element exists in set1
                intersectionSet.insert(ele);

        return intersectionSet;
    }
```


* Time Complexity -> O(m+n)
* Space Complexity-> O(n)
