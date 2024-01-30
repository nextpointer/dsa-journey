#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void solve(string digits,string output,int index,vector<string>&ans,string keyMap[])
    {
        // base case
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }

        // recursive case
        int number= digits[index]-'0';
        string value =keyMap[number];

        for (int i = 0; i < value.length(); i++)
        {
           output.push_back(value[i]);
           solve(digits,output,index+1,ans,keyMap);
           output.pop_back();
        }
        
    }
    public:
     vector<string> letterCombinations(string digits){
        vector<string> ans;
        if(digits.empty())  // Handle case when input is empty
            return ans;
        string output;
        int index=0;
        // Mapping the keypaid
        string keyMap[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index,ans,keyMap);
        return ans;

     }
};


int main(int argc, char const *argv[])
{
    cout<<"Enter your input"<<endl;
    string str;
    cin>>str;
    Solution obj;
    vector<string> output ;
    output=obj.letterCombinations(str);
    for (int i = 0; i < output.size(); i++)
    {
        cout<<output[i]<<" ";
    }
    
    return 0;
}
