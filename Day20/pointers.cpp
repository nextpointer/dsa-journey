#include<iostream>
using namespace std;


int* createInt() {
    int x = 10;
    return &x; // Returning a pointer to a local variable
}

int main(int argc, char const *argv[])
{
    // Void Pointer
    // int var=10;
    // void *ptr=&var;
    // cout<<*(int*)ptr<<endl;
    // here ptr is a void pointer 

    // NULL pointer 
    // int *ptr=NULL;
    // cout<<*ptr<<endl;
    // ptr is NULL pointer


    int* ptr = createInt(); // ptr now points to a local variable x in createInt()
    
    // Accessing the value through the pointer
    cout << "Value: " << *ptr << endl; // This may print 10, but it's undefined behavior
    
    // After returning from createInt, x goes out of scope and the memory it occupied may be reused
    // So, ptr now becomes a dangling pointer
    
    // Attempting to dereference the dangling pointer
    cout << "Dangling Pointer Value: " << *ptr << endl; // Undefined behavior

    return 0;
}
