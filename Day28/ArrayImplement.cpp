#include <iostream>
#include <stack>
using namespace std;

class Stack
{
    // Propeties
    // Building a stack class need the properties that is top,size and a array to store
    private:
    int top;
    int size;
    int *arr;

    public:
    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    void push(int element)
    {
        // checking the stack overflow or not 
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"The stack is overflowed";
        }
    }

    int pop()
    {
        int popelement=arr[top];
        // checking the stack underflow or not 
        if (top==-1){
            cout<<"The stack is underflow";
        }
        else{
            top--;
        }
        return popelement;
    }

    int peek()
    {
        // returns the top element of the stack
        return arr[top];
    }
};

int main(int argc, char const *argv[])
{
    Stack st(6);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<"the top element of the stack is "<<st.peek()<<endl;
    // working
    return 0;
}
