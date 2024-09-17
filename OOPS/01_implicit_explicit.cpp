//this is example of implicit converion that refers to the automatic conversion

#include<iostream>
using namespace std;


// In this example we don't use the explicit keyword
class Example{
    int x;
    public:
    Example(int value):x(value){
        cout<<"The Example is created"<<endl;
    };
    // create  a method for display the value
    void display() const{
        cout<<"The value of the example is "<<x<<endl;
    }
    // the intution of using const in a method is,the method is can't modify any member value
};




// Now this is example of using explicit func 
class Example2{
    int y;
    public:
    explicit Example2(int value):y(value){
        cout<<"The example2 constructor is created"<<endl;
    };

    void display2() const{
        cout<<"the value of example is "<<y;
    }

};

int main(){
    Example obj1 = 10;
    obj1.display();
    Example2 obj2(10);
    obj2.display2();
}


