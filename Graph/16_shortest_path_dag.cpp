//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  private:
  void topoSort(int node,int vis[],vector<pair<int,int>>adj[],stack<int> &st){
      vis[node] =1;
      for(auto it:adj[node]){
          int u = it.first;
          if(!vis[u]) topoSort(u,vis,adj,st);
      }
      st.push(node);
  }
  public:
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // create the adjaceny array
        vector<pair<int,int>> adj[N];
        for(int i=0;i<M;i++){
            int u = edges[i][0];
            int v  = edges[i][1];
            int wt = edges[i][2];
            adj[u].push_back({v,wt});
        }
        // adjacency array is ready
        // Now do topo sort 
        stack<int> st;
        int vis[N] = {0};
        for(int i=0;i<N;i++){
            if(!vis[i]){
                topoSort(i,vis,adj,st);
            }
        }
        
        // now the step2 is take out all verteces and relax them
        vector<int> dist(N);
        for(int i=0;i<N;i++){
            dist[i] = 1e9;
        }
        dist[0] = 0;
        while(!st.empty()){
            int node = st.top();
            st.pop();
            
            for(auto it:adj[node]){
                int u = it.first;
                int wt = it.second;
                
                
                if(dist[node] + wt < dist[u]){
                    dist[u] = dist[node] + wt;
                }
            }
            
        }
        for(auto &d : dist)
            if(d == 1e9)d = -1;
        
        return dist;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends