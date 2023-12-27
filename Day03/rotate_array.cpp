#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    void rotateArray(vector<int>&arr,int r)
    {
        int n=arr.size();
        int k=r%n;
        // reverse the full array
        reverse(arr.begin(),arr.end());
        // reverse the first k elements
        reverse(arr.begin(),arr.begin()+k);
        // reverse the remaining elements
        reverse(arr.begin()+k,arr.end());

    }
    void printArray(vector<int>&arr){
        for(int num:arr)
            cout<<num<<" ";
    }
};

int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,0,1,2};
    Solution obj;
    obj.rotateArray(arr,50);
    obj.printArray(arr);
}