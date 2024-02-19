## Date - [19-02-24]

## Topic Name

Linked List

## Todays Goal

* Doubly Linked List

## Code

#### Insert at Head

```
void insertAtHead(Node *&head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    traverse(head);
}
```

### Insert at Tail

```
void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    traverse(head);
}
```

### Insert at Any position

```
void InsertAtAnyPosition(int position, Node *&head, Node *&tail, int data)
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
    if (count < position || position < 0)
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
        head->prev = newNode;
        head = newNode;
        cout << "Node added successfully in the head" << endl;

        // Traversing the node
        traverse(head);
    }
    else if (position == count)
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;

        cout << "Node added successfully in the Tail" << endl;

        // Traversing the node
        traverse(head);
    }
    else
    {
        int flag = 1;
        while (flag < position)
        {
            pointer = pointer->next;
            flag++;
        }
        newNode->next = pointer->next;
        pointer->next->prev=newNode;
        pointer->next = newNode;
        newNode->prev=pointer;

        cout << "Node added successfully at " << position << "th position" << endl;
        // Traversing the node
        traverse(head);
    }
}
```
