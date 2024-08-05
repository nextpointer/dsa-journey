//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        vector<pair<int,int>> v;
        // create a loop and store the start and end in v
        for(int i=0;i<n;i++){
            pair<int,int> temp = make_pair(start[i],end[i]);
            v.push_back(temp);
        }
        
        sort(v.begin(),v.end(),[](const pair<int,int> &a,const pair<int,int> &b){
            return a.second<b.second;
        });
        int count = 1;
        int ansEnd = v[0].second;
        for(int i = 1;i<n;i++){
            if(v[i].first>ansEnd){
                count++;
                ansEnd = v[i].second;
            }
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends