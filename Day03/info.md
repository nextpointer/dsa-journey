## Date - [17-12-23]

## Topic Name

Array

## Todays Goal

* Write a program to cyclically rotate an array by k times
* Move all the negative elements to one side of the array
* Find Largest sum contiguous Subarray
* Minimise the maximum difference between heights
* Minimum no. of Jumps to reach end of an array

## Code

### Write a program to cyclically rotate an array by k times

```
class Solution{
    public:
    void rotateArray(vector<int>&arr,int r)
    {
        int n=arr.size();
        int k=r%n;
        // reverse the full array
        reverse(arr.begin(),arr.end());
        // reverse the first k elements
        reverse(arr.begin(),arr.begin()+k);
        // reverse the remaining elements
        reverse(arr.begin()+k,arr.end());

    }
    void printArray(vector<int>&arr){
        for(int num:arr)
            cout<<num<<" ";
    }
};
```

* Time Complexity-> O(n)

* Space Complexity->O(1)
