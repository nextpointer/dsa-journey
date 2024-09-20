#include<iostream>
using namespace std;


// First initialize a class and see a example of default constructor

class Constructor{
    public:

    int a,b;
    Constructor(){
        cout<<"The Default constructor is called"<<endl;
    }
    //When i called a object,this default constructor is always called first
    // That have no return type
    // No input 
    

    // Now create a parameterised consstructor
    // That have parameter
    Constructor(int a,int b){
        this->a = a;
        this->b = b;
        cout<<"The parameterised constructor is called"<<endl;

        // The this points to the current object means contains the current object address
    }
};


int main(int argc, char const *argv[])
{
    Constructor obj; 
    // Constructor obj(10,20);

    // One Constructor is called at a time based on their paramter

    return 0;
}
