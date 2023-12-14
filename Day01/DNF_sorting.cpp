#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    void DNFsort(vector<int>&arr)
    {
        int n=arr.size();
        int low=0,mid=0,high=n-1;
        while(mid<=high)
        {
            if(arr[mid]==0)
            {
                swap(arr[mid],arr[low]);
                low++;
                mid++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }

    void printArray(vector<int>&arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout<<arr[i]<<" ";
        }
        
    }
};

int main(){
    vector<int>arr={0,1,2,2,0,1,0,2,1,1};
    Solution obj;
    obj.DNFsort(arr);
    obj.printArray(arr);
    

}