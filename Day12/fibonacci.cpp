#include<bits/stdc++.h>
using namespace std;

// class Solution{
//     public:
//     long long int NthFibonacii(int n){
//         if(n<1)
//             return n;
//         long long int prev=0;
//         long long int neww=1;
//         long long int tp;
//         while(n>2){
//             tp=prev+neww;
//             prev=neww;
//             neww=tp;
//             n--;
//         }

//         return neww;  
//     }
// };


class Solution{
    public:
    long long int NthFibonacii(int n){
        // base case
        if(n<2)
            return n;

        // recursive case 
        return NthFibonacii(n-1)+NthFibonacii(n-2);
        
    }
};



int main(int argc, char const *argv[])
{
    cout<<"Enter your nth Number"<<" ";
    int num;
    cin>>num;

    long long int result;
    Solution obj;
    result=obj.NthFibonacii(num);
    cout<<result;
    return 0;
}
