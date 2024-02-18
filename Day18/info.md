## Date - [03-02-24]

## Topic Name

Linked List

## Todays Goal

* Singly Linked List

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

### Insert at Any position

```
void InsertAtAnyPosition(int position, Node *&head, Node *&Tail, int data)
{
    // Finding the length of the linked list
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    // Checking user input valid or not
    if (count < position)
    {
        cout << "User input is out of bound" << endl;
    }

    // Insertion Operation
    // There are three possibilities
    // 1.position is 0th
    // 2.Position is (n-1)th
    // 3.Position is middle of that

    Node *newNode = new Node(data);
    Node *pointer = head;

    if (position == 0)
    {
        newNode->next = head;
        head = newNode;
        cout << "Node added successfully in the head" << endl;

        // Traversing the node
        traverse(head);
    }
    else if (position == count)
    {
        Tail->next = newNode;
        Tail = newNode;
        newNode->next = NULL;

        cout << "Node added successfully in the Tail" << endl;

        // Traversing the node
        traverse(head);
    }
    else{
        int flag=1;
        while(flag<position)
        {
            pointer=pointer->next;
            flag++;
        }
        newNode->next=pointer->next;
        pointer->next=newNode;


        cout<<"Node added successfully at "<<position<<"th position"<<endl;
        // Traversing the node
        traverse(head);

    }

}
```

### Delete at any position

```
void DeleteAtAnyPosition(int position, Node *&head, Node *&tail){

    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    // Checking user input valid or not
    if (count <= position || position < 0)
    {
        cout << "User input is out of bound" << endl;
        return;
    }

    // Deletation Operation
    // There are three possibilities
    // 1.position is 0th
    // 2.Position is (n-1)th
    // 3.Position is middle of that

    if (position == 0)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;

        cout<<position<<"th Node is deleted"<<endl;
        traverse(head);
    }
    else
    {
        Node* prev=NULL;
        Node* curr=head;
        count=0; // Resetting count to 0 since we need to start counting from the beginning
        while (count < position)
        {
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        if (curr == tail) // Update tail if the last node is deleted
            tail = prev;
        curr->next=NULL;
        delete curr;
        cout<<position<<"th Node is deleted"<<endl;
        traverse(head);
    }
}
```
