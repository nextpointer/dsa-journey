#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void traverse(Node*& head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void InsertAtHead(Node *& head,int data){
    Node* newNode = new Node(data);
    newNode->next=head;
    head=newNode;
    cout<<"Node added successfully in the head"<<endl;
    
    // Traversing the node
    traverse(head);
}

int main(int argc, char const *argv[])
{
    Node* node1=new Node(5);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;

    Node* head;
    head=node1;
    // Insert a node in head
    // InsertAtHead(head,1);
    InsertAtHead(head,2);
    InsertAtHead(head,3);





    return 0;
}
 