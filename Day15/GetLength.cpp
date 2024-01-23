#include<iostream>
using namespace std;


int getLength(char name[])
{
    int count;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
    
}

int main(int argc, char const *argv[])
{
    char name[50];
    cout<<"Enter your String "<<endl;
    cin>>name;
    cout<<"Length of the string is : "<<getLength(name);
    return 0;
}
