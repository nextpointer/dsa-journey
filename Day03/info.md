## Date - [17-12-23]

## Topic Name

Array

## Todays Goal

* Write a program to cyclically rotate an array by k times
* Move all the negative elements to one side of the array

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

### Move all the negative elements to one side of the array

```
class Solution{
    public:
    void moveNegetiveNumber(vector<int>&arr){
        int n=arr.size();
        int low=0,high=n-1;
        while(low<high){
            if(arr[low]>0 ||arr[low]==0){
                swap(arr[low],arr[high]);
                high--;
            }
            else if(arr[low]<0){
                low++;
            }
        }
    }
     void printArray(vector<int>&arr){
        for(int num:arr)
            cout<<num<<" ";
    }
};
```

* Time Complexity-> O(n)
* Space Complexity->O(1)
