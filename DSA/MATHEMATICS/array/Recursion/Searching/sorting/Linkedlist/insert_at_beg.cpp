#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next; // pointer to the next node in the list

    node(int d, node *next)
    {
        data = d;
        this->next = next;
    }
// Todo write a destructor to delete a node
~node()
{
    cout << "deleted value is " << this->data << endl;
}
};

void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtBeg(node *&head, node *&tail, int x)
{
    // Step 1: Create a new node
    node *newNode = new node(x, NULL);

    // Step 2: Check if the list is empty
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    // Step 3: Insert at the beginning
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(node *&head, node *&tail, int y)
{
    // Step 1: Create a new node
    node *newNode = new node(y, NULL);

    // Step 2: Check if the list is empty
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    // Step 3: Insert at the end
    tail->next = newNode;
    tail = newNode;
}

int findLen(node *head)
{
    node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPos(node *&head, node *&tail, int data, int pos)
{
    // Step 1: Check if the list is empty
    if (head == NULL)
    {
        node *newNode = new node(data, nullptr);
        head = newNode;
        tail = newNode;
        return;
    }

    // Step 2: Handle insertion at the beginning separately
    if (pos == 0)
    {
        insertAtBeg(head, tail, data);
        return;
    }

    // Step 3: Handle insertion at the end separately
    int len = findLen(head);
    if (pos >= len)
    {
        insertAtEnd(head, tail, data);
        return;
    }

    // Step 4: Find the position
    int i = 1;
    node *temp = head;
    while (i < pos)
    {
        temp = temp->next;
        i++;
    }

    // Step 5: Create a new node and add it after temp
    node *newNode = new node(data, NULL);

    // Step 6: Insert the element at the given position
    node *curr = temp->next;
    newNode->next = curr;
    temp->next = newNode;
}
void deletenode(node *&head, node *&tail, int pos)
{
    if (head == 0)
    {
        cout << "List is already Empty\n";
        return;
    }
    // delete at beginning
    if (pos == 1)
    {

        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return ;
    }
    int len = findLen(head);
    int i = 1;
      node *prev = head;
    while (i < pos - 1)
    {
        prev = prev->next;
        i++;
    }
    if (pos == len)
    {
        node *temp = tail;
        prev->next = NULL;
        tail = prev;
        delete temp;
        return ;
    }
   

    // delete from middle
    node * temp= head;
    i=1;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    node * curr=prev->next;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    return ;
   }


int main()
{
    node *head = NULL;
    node *tail = NULL;

    insertAtBeg(head, tail, 4);
    insertAtBeg(head, tail, 5);
    insertAtBeg(head, tail, 6);
    insertAtBeg(head, tail, 7);

    // Insert at the end
    insertAtEnd(head, tail, 8);

    cout << "Original list: ";
    print(head);
    cout << "head " << head->data << " tail " << tail->data << endl;

    // // Insert at the given position
    // insertAtPos(head, tail, 34, 6);

    // cout << "After inserting at position: ";
    // print(head);
    // cout << "head " << head->data << " tail " << tail->data << endl;
   // Delete from the linked list
    deletenode(head, tail, 3);
    print(head);
    return 0;
    /* Linking nodes */
}
