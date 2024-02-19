#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        cout<<"Node is created"<<endl;
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

};

int getLength(Node* &head){
    Node* temp=head;
    int count=0;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    
    return count;
    
}


void traverse(Node* &head){
    Node* temp=head;
    int size=getLength(head);

    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }  

    cout<<endl;
}

void insertAtHead(Node* &head,int data)
{
    Node* newNode=new Node(data);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    traverse(head);
}

void insertAtTail(Node* &head,Node* &tail,int data)
{
    Node* newNode=new Node(data);
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
    traverse(head);
}


int main(int argc, char const *argv[])
{
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    traverse(head);
    insertAtHead(head,6);
    insertAtHead(head,8);
    insertAtHead(head,12);

    // insert at Tail
    // insertAtTail(head,tail,88);






    return 0;
}