//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
  bool dfs(vector<int> adj[],int v_path[],int node,int vis[]){
      vis[node] = 1;
      v_path[node] = 1;
      
    //   traverse the adj nodes 
    for(auto it: adj[node]){
        if(!vis[it]){
            if(dfs(adj,v_path,it,vis)==true) return true;
        }
        else if(v_path[it]){
            return true;
        }
    }
      
    //   when it's traverse back the visited path will be zero
    v_path[node] = 0;
    return false;
  }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        int vis[V] = {0};
        int v_path[V] = {0};
        
        for(int i = 0;i<V;i++){
            if(!vis[i]){
                if(dfs(adj,v_path,i,vis)==true) return true;
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends