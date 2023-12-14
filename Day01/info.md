## Date - [14-12-23]

## Topic Name

Array

## Todays Goal

* Reverse the array
* Find the maximum and minimum element in an array
* Find the "Kth" max and min element of an array
* Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
* Move all the negative elements to one side of the array

## Code

### Reverse the array

```
class Solution {
public:
    string reverseWord(string str) {
        int start = 0;
        int end = str.length() - 1; 
        while (start < end) { 
            swap(str[start], str[end]);
            start++;
            end--;
        }
        return str;
    }
};
```

* Time Complexity: O(n)
* Space Complexity: O(1)

### Sum of Minimum and Maximum of the Array

```
class Solution{
    public:
    int SumOfMinMax(vector<int>arr) //this function returns the sum of min and max of the array
    {
        int min=INT_MAX;
        int max=INT_MIN;
        for (int i = 0; i < arr.size(); i++)
        {
            if(arr[i]<min)
                min=arr[i];

            if(arr[i]>max)
                max=arr[i];
        }
        int sum=max+min;
        return sum;

    }
};
```

* Time Complexity: O(n)
* Space Complexity: O(1)

### Kth Smallest Element of an Array

```
class Solution {
public:
    void bubbleSort(vector<int>& arr) {
        int n = arr.size();
        for (int i = 0; i < n-1; i++) {
            for (int j = 0; j < n-i-1; j++) {
                if (arr[j] > arr[j+1]) {
                    swap(arr[j], arr[j+1]);
                }
            }
        }
    }

    int findKthSmallest(vector<int>& arr, int k) {
        bubbleSort(arr);
        int smallest_element = arr[k - 1];
        return smallest_element;
    }
};
```

* Time Complexity: O(n^2)
* Space Complexity: O(1)
