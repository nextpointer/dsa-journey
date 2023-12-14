#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int SumOfMinMax(vector<int>arr) //this function returns the sum of min and max of the array
    {
        int min=INT_MAX;
        int max=INT_MIN;
        for (int i = 0; i < arr.size(); i++)
        {
            if(arr[i]<min)
                min=arr[i];

            if(arr[i]>max)
                max=arr[i];
        }
        int sum=max+min;
        return sum;

    }
};



int main(){
    vector<int>arr={-58,58,4,2,1};
    Solution obj;
    cout<<"The sum is "<<obj.SumOfMinMax(arr)<<endl;
    return 0;
}