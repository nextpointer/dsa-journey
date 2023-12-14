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
        int end = str.length() - 1; // Corrected the end index
        while (start < end) {  // Changed the condition to start < end
            swap(str[start], str[end]);
            start++;
            end--;
        }
        return str;
    }
};
```
