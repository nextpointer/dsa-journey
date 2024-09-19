#include<iostream>
#include "sampleClass.cpp"
using namespace std;


int main(int argc, char const *argv[])
{
    // Now create a object with static type
    Student staticObj;
    staticObj.getProperty();

    // Now creae a object with dynamic memory allocation
    Student *dynamicobj = new Student;
    // the new keyword request Heap to create a memory
    cout<< (*dynamicobj).details<<endl;
    (dynamicobj)->getProperty();

    return 0;
    
}

