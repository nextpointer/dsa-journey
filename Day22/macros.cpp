#include<iostream>
#include<string>
#define PI 3.14
#define AREA(r) r*r*PI
using namespace std;



int main(int argc, char const *argv[])
{
    cout<<"the value of PI is "<<PI<<endl;
    cout<<"The area of a circle is "<<AREA(5)<<endl;

    // Some predifined macros value
    char time[]= __TIME__;
    cout<<"The time is "<<time<<endl;
    char file[]=__FILE__;
    cout<<"The file name is "<<file<<endl;
    cout<<"The line number is "<<__LINE__<<endl;
    cout<<"The current date is "<<__DATE__<<endl;

    #undef PI
    // cout<<"the value of PI is "<<PI<<endl;
    
    return 0;
}
