#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void moveNegetiveNumber(vector<int>&arr){
        int n=arr.size();
        int low=0,high=n-1;
        while(low<high){
            if(arr[low]>0 ||arr[low]==0){
                swap(arr[low],arr[high]);
                high--;
            }
            else if(arr[low]<0){
                low++;
            }
        }
    }
     void printArray(vector<int>&arr){
        for(int num:arr)
            cout<<num<<" ";
    }
};


int main(){
    vector<int>arr={1,-2,-6,8,9,-7,-2,0,1,2};
    Solution obj;
    obj.moveNegetiveNumber(arr);
    obj.printArray(arr);
}