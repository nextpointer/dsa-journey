#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool isSubsequence(string s, string t){
        int slength = s.length();
        int tlength = t.length();
        int i = 0, j = 0;
        
        while (i < slength && j < tlength) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        
        return i == slength;
    }
};



int main(){
    string s="abc";
    string t="abcdef";
    Solution obj;
    cout<<obj.isSubsequence(s,t)<<endl;

}