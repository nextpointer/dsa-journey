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

    // Now implement the copy constructor
    // The copy constructor copy all object properties in the new Object,Nothing complecated
    Constructor(Constructor &PredefinedObj){
        this->a = PredefinedObj.a;
        this->b = PredefinedObj.b;
        cout<<"The copy constructor is called"<<endl;
        // Copy constructor is called
    }


    // Create a function for prinint the value
    void Print(){
        cout<<"This->"<<this<<endl;
        cout<<"The value of a "<<this->a<<endl;
        cout<<"The value of b "<<this->b<<endl;
    }
};


int main(int argc, char const *argv[])
{
    // Constructor obj; 
    Constructor obj(10,20);
    obj.Print();

    // One Constructor is called at a time based on their paramter

    // Create a new Object and copy the value from obj
    Constructor newObj(obj);
    newObj.Print();


    return 0;
}
