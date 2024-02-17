#include<iostream>
using namespace std;

void printArray(int arr[],int size,int start_position=0){
    for (int i = start_position; i < size; i++)
    {
        cout<<arr[i]<<" ";
    } 
}

int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5};
    printArray(arr,5);
    cout<<endl;
    printArray(arr,5,2);
    return 0;
}
