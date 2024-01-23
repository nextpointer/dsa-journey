## Date - [23-01-24]

## Topic Name

String

## Todays Goal

1. Maximum Ocurrance of a chracter


## Code

Maximum Ocurrance of a chracter

```
class Solution
{

public:
    char MaximumOcuurrance(string str)
    {
        int arr[26] = {0};
        for (int i = 0; i < str.length(); i++)
        {
            char ch = str[i];
            int number = 0;
            number = ch - 'a';
            arr[number]++;
        }

        // find maximum occurrant chracter
        int maxi = -1, ans = 0;
        for (int i = 0; i < 26; i++)
        {
            if (maxi < arr[i])
            {
                ans = i;
                maxi = arr[i];
            }
        }

        return 'a' + ans;
    }
};
```

* Time Complexity : O(n)
* Space Complexity : O(n)
