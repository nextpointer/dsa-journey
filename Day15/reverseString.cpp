#include<iostream>
using namespace std;


int getLength(char arr[])
{
    int count=0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }

    return count;   
}

void reverseString(int n,char arr[]){
    int s=0;
    int e=n-1;
    cout<<endl<<n;
    while (s<e)
    {
        swap(arr[s++],arr[e--]);
        
    }
    
}

int main(int argc, char const *argv[])
{
    char arr[50];
    cout<<"Enter your String "<<endl;
    cin>>arr;
    cout<<"Length of the string is : "<<getLength(arr);
    int len =getLength(arr);
    reverseString(len,arr);
    cout<<endl<<"The reverse String is : "<<arr;

    return 0;
}
