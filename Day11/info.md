## Date - [11-01-24]

## Topic Name

Recursion

## Todays Goal

* sum of n numbers
* Factorial of numbers
* Reverse a number
* Check if a string palindrome or not
* Fibonacci Number printing

## Code

#### Sum of n numbers

```
class Solution
{
    public:
    long long int factorial(int n)
    {
        // base case
        if(n==0)
            return 1;
      
        // recursive case
        return n*factorial(n-1);
    }
  
};
```
