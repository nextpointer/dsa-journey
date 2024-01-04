## Date - [04-12-23]

## Topic Name

Array

## Todays Goal

* Minimum no. of Jumps to reach end of an array
* find duplicate in an array of N+1 Integers
* Merge 2 sorted arrays without using Extra space

## Code

### Minimum no. of Jumps to reach end of an array

```
class Solution
{
public:
    int minJump(vector<int> &arr)
    {
        int n = arr.size();
        int maxi=0;
        int maxR=0;
        int jumps=0;
        if(n==1){
            return 0;
        }
        if(arr[0]==0){
            return -1;
        }
        for(int i=0;i<n;i++){
            maxi=max(maxi,i+arr[i]);
            if(i==maxR){
                maxR=maxi;
                jumps++;
                if(maxR>=n-1){
                return jumps;
            }
            }
        }
        return -1;
    }
};
```

* Time Complexity->O(n)
* Space Complexity->O(1)


### Find element occuring once when all other are present thrice

> #### Qs Link 👍: https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

```

```
