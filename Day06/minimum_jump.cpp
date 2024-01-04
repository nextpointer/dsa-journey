#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minJump(vector<int> &arr)
    {
        int n = arr.size();
        int maxi=0;
        int maxR=0;
        int jumps=0;
        if(n==1){
            return 0;
        }
        if(arr[0]==0){
            return -1;
        }
        for(int i=0;i<n;i++){
            maxi=max(maxi,i+arr[i]);
            if(i==maxR){
                maxR=maxi;
                jumps++;
                if(maxR>=n-1){
                return jumps;
            }
            }
        }
        return -1;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    Solution obj;
    int jumpNo = obj.minJump(arr);
    cout << "Minimum number of jumps is " << jumpNo << endl;
    return 0;
}
