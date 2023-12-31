#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int subarrayMaxSum(vector<int>&arr){
        long long maxSum=INT_MIN;
        long long currSum=0;
        for (int i = 0; i < arr.size(); i++)
        {
            currSum=currSum+arr[i];
            if(currSum>maxSum)
                maxSum=currSum;
            
            if(currSum<0)
                currSum=0;
        }
        

        return maxSum;
    }

};

int main(int argc, char const *argv[])
{
    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};
    Solution obj;
    long long maxSum=obj.subarrayMaxSum(arr);
    cout<<"Max Sum is :"<<maxSum<<endl;
    return 0;
}
