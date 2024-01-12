Date - [11-01-24]

## Topic Name

Recursion

## Todays Goal

* valid palindrome
* Fibonaccii

## Code

#### Valid Plaindrome

```
class Solution
{
    public:
    bool palindrome(string str)
    {
        string newStr;
        for(char c:str){
            if(isalnum(c))
             newStr+=tolower(c);
        }

        string clone =newStr;
        reverseStr(clone,0,clone.size());
    
        if(clone==newStr)
            return true;
        else
            return false;

    }  

     void reverseStr(string str, int left, int right)
    {
        if (left < right)
        {
            swap(str[left], str[right]);
            reverseStr(str, left + 1, right - 1);
        }
    }
};
```

* Time Complexity: O(N)
* Space Complexity: O(N)

#### Fibonacci Series

```

```
