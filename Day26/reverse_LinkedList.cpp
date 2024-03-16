

#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        cout<<"Node is created "<<endl;
        this->data=data;
        this->next=NULL;
        
    }
};
void traverse(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
//Naive Approch
void ReverseLinkedList(Node *head)
{
    Node* temp;
    temp=head;
    stack<int> s;
    while(temp!=NULL){
        s.push(temp->data);
        temp=temp->next;
    }
    temp=head;
    while (temp!=NULL)
    {
        temp->data=s.top();
        s.pop();
        temp=temp->next;
    }
    traverse(head);

}


void InsertAtTail(Node *&Tail, Node *&head, int data)
{
    Node *newNode = new Node(data);
    Tail->next = newNode;
    Tail = newNode;
    newNode->next = NULL;

    cout << "Node added successfully in the Tail" << endl;

    // Traversing the node
    traverse(head);
}

int main(){
   Node* node1=new Node(1);
   Node*head=node1;
   Node* Tail=node1;
   InsertAtTail(Tail,head,2);
   InsertAtTail(Tail,head,3);
   InsertAtTail(Tail,head,4);
   InsertAtTail(Tail,head,5);
   traverse(head);

    ReverseLinkedList(head);

}