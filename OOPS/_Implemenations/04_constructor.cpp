#include<iostream>
using namespace std;


// First initialize a class and see a example of default constructor

class Constructor{
    public:
    Constructor(){
        cout<<"The Default constructor is called"<<endl;
    }
    //When i called a object,this default constructor is always called first
    // That have no return type
    // No input 
};


int main(int argc, char const *argv[])
{
    Constructor obj; 

    return 0;
}
