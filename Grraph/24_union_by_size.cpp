#include<bits/stdc++.h>
using namespace std;
class Disjoint_set2{
    vector<int> parent,sizes;
    public:
    Disjoint_set2(int n){
        parent.resize(n+1);
        sizes.resize(n+1);

        for(int i=0;i<=n;i++){
            parent[i] = i;
            sizes[i] = 1;
        }
    }

    int findParent(int node){
        if(node==parent[node])
            return node;
        else{
            return parent[node] = findParent(parent[node]);
        }
    }

    void UnionBySize(int u,int v){
        int ul_u = findParent(u);
        int ul_v = findParent(v);
        if(ul_u==ul_v) return;

        if(sizes[ul_u]>sizes[ul_v]){
            parent[ul_v] = ul_u;
            sizes[ul_u]+=sizes[ul_v];
        }
        else{
            parent[ul_u] = ul_v;
            sizes[ul_v]+=sizes[ul_u];
        }
    }
};

int main(){
    Disjoint_set2 ds(6);
    ds.UnionBySize(1,2);
    ds.UnionBySize(2,3);
    ds.UnionBySize(4,5);
    ds.UnionBySize(6,7);
    ds.UnionBySize(5,6);
    if(ds.findParent(3)==ds.findParent(7)){
        cout<<"Are in same Component";
    }
    else{
        cout<<"Not in the same Component"<<endl;
    }
    ds.UnionBySize(3,7);
    if(ds.findParent(3)==ds.findParent(7)){
        cout<<"Are in same Component";
    }
    else{
        cout<<"Not in the same Component"<<endl;
    }

}