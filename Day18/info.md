## Date - [03-02-24]

## Topic Name

Linked List

## Todays Goal

* Insertion
* Deletation
* Update
* Reverse

## Code

### Traverse the Linked List

```
void traverse(Node*& head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
```

### Insert at Head

```
void InsertAtHead(Node *& head,int data){
    Node* newNode = new Node(data);
    newNode->next=head;
    head=newNode;
    cout<<"Node added successfully in the head"<<endl;
  
    // Traversing the node
    traverse(head);
}
```

### Insert at Tail

```
void InsertAtTail(Node* &Tail,Node* &head,int data){
    Node* newNode = new Node(data);
    Tail->next=newNode;
    Tail=newNode;
    newNode->next=NULL;

    cout<<"Node added successfully in the Tail"<<endl;
  
    // Traversing the node
    traverse(head);

}
```
