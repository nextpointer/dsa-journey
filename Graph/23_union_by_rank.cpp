#include<bits/stdc++.h>
using namespace std;
class Disjoint_set{
    // initialize the rank and parent vector
    vector<int> rank,parent;
    public:
    // initialize the constructor
    Disjoint_set(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i] = i;
        }
    }
    // implement the findParent function
    int findParent(int node){
        if(node == parent[node])
            return node;
        else
            return parent[node] = findParent(parent[node]);
    }
    // Now implement the union by rank
    void Union_by_rank(int u,int v){
        int ul_u = findParent(u);
        int ul_v = findParent(v);
        
        if(ul_u == ul_v) return; //it means they are belonging to the same component
        if(rank[ul_u]>rank[ul_v]){
            parent[ul_v] = ul_u;
        }
        else if(rank[ul_u]<rank[ul_v]){
            parent[ul_u] = ul_v;
        }
        else{
            // rank is same
            parent[ul_u] = ul_v;
            // the increament the rank of that parent
            rank[ul_v]++;
        }
    }
};

int main(){
    // now create a object 
    Disjoint_set ds(6);
    // now it's call the constructor and initialize the rank and parent 
    ds.Union_by_rank(1,2);
    ds.Union_by_rank(2,3);
    ds.Union_by_rank(4,5);
    ds.Union_by_rank(6,7);
    ds.Union_by_rank(5,6);
    // Now check 1 and 7 are in same component or not
    if(ds.findParent(3)==ds.findParent(7)){
        cout<<"Are in same Component";
    }
    else{
        cout<<"Not in the same Component"<<endl;
    }
    ds.Union_by_rank(3,7);

     if(ds.findParent(3)==ds.findParent(7)){
        cout<<"Are in same Component";
    }
    else{
        cout<<"Not in the same Component";
    }
}