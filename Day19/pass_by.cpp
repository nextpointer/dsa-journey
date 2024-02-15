#include<iostream>
using namespace std;

// Pass by Value
void update1(int n){
    n++;
}

// Pass by Reference
void update2(int &n){
    n++;
}


int main(int argc, char const *argv[])
{
    int n=6;
    cout<<"Before updating "<<n<<endl;
    // update1(n);
    update2(n);
    cout<<"After updating "<<n<<endl;
    // when i update by value,thats does not update.Because it creates a separate memory by coping
    return 0;
}
