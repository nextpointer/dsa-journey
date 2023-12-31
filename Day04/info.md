## Date - [27-12-23]

## Topic Name

Array

## Todays Goal

* find Largest sum contiguous Subarray [V. IMP]
* Minimise the maximum difference between heights [V.IMP]
* Minimum no. of Jumps to reach end of an array

## Code

### find Largest sum contiguous Subarray [V. IMP]

```
class Solution{
    public:
    int subarrayMaxSum(vector<int>&arr){
        long long maxSum=INT_MIN;
        long long currSum=0;
        for (int i = 0; i < arr.size(); i++)
        {
            currSum=currSum+arr[i];
            if(currSum>maxSum)
                maxSum=currSum;
          
            if(currSum<0)
                currSum=0;
        }
      

        return maxSum;
    }

};
```
