## Date - [04-01-24]

## Topic Name

Array

## Todays Goal

* Minimum no. of Jumps to reach end of an array
* Find element occuring once when all other are present thrice

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
class Solution {
public:
    int singleElement(int arr[], int N) {
        std::unordered_map<int, int> up;

        // Count the frequency of each element in the array
        for (int i = 0; i < N; ++i) {
            up[arr[i]]++;
        }

        // Find the unique element with frequency 1
        for (int i = 0; i < N; ++i) {
            if (up[arr[i]] == 1)
                return arr[i];
        }

        // If no unique element is found, you may want to handle this case appropriately.
        // For example, you could throw an exception, return a specific value, or print an error message.
        // Here, we return -1 as a placeholder for no unique element found.
        return -1;
    }
};
```

* Time Complexity->O(n)
* Space Complexity->O(n)
