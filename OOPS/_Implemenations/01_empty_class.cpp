#include<iostream>
using namespace std;

class Parent{
 //This is empty class 
};


//Let's see what is the size of that
int main(int argc, char const *argv[])
{
    Parent obj;
    cout<<"The size of the class is "<<sizeof(obj)<<endl;
    // The size of the empty class is 1,because of identification and existance
    return 0;
}
