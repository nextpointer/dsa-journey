#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    // Creating a 2D Array
    int row;
    cout<<"Enter the row size"<<endl;
    cin>>row;
    int column;
    cout<<"Enter the column size"<<endl;
    cin>>column;

    int **arr=new int*[row];
    for (int i = 0; i < row; i++)
    {
        arr[i]=new int[column];
    }

    // input values
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    cout<<endl;

    // printing the values
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;    
    }

    // Releasing the memory
    for (int i = 0; i < row; i++)
    {
        delete []arr[i];
    }

    delete []arr;
    

    
    


    return 0;
}
