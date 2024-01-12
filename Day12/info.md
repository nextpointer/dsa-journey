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

##### Loop Approch

```
class Solution{
    public:
    long long int NthFibonacii(int n){
        if(n<1)
            return n;
        long long int prev=0;
        long long int neww=1;
        long long int tp;
        while(n>2){
            tp=prev+neww;
            prev=neww;
            neww=tp;
            n--;
        }

        return neww;  
    }
};
```

* Time Complexity: O(n)
* Space Complexity: O(1)

##### Recursive Approach

```
class Solution{
    public:
    long long int NthFibonacii(int n){
        // base case
        if(n<2)
            return n;

        // recursive case 
        return NthFibonacii(n-1)+NthFibonacii(n-2);
      
    }
};
```

* Time Complexity: O(2^n)
* Space Complexity: O(n)
