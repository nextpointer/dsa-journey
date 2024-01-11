#include<bits/stdc++.h>
using namespace std;

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





int main(int argc, char const *argv[])
{
    cout<<"Enter your Number"<<endl;
    int number;
    cin>>number;
    Solution obj;
    long long int answer=obj.factorial(number);
    cout<<answer;

    return 0;
}
