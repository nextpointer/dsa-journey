## Date - [11-01-24]

## Topic Name

Recursion

## Todays Goal

* Power of two
* Factorial of numbers
* Reverse a Array

## Code

#### Factorial of a number

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

#### Power of Two

```
class Solution
{
    public:
    long long int power(int n)
    {
        // base case
        if(n==0)
            return 1;
  
        // recursive case
        return 2*power(n-1);
    }
  
};
```

#### Reverse an Array

```
class Solution
{
public:
    void reverseArray(vector<int>& arr, int left, int right)
    {
        if (left < right)
        {
            swap(arr[left], arr[right]);
            reverseArray(arr, left + 1, right - 1);
        }
    }
};
```
