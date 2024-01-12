#include<bits/stdc++.h>
using namespace std;

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


int main(int argc, char const *argv[])
{
    string str={"soos"};
    Solution obj;
    bool result=obj.palindrome(str);
    cout<<result<<endl;
    return 0;
}
