#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* prev;
    node *next; // pointer to the next node in the list

    node(int d)
    {
        data = d;
        this->next = NULL;
        this->prev=NULL;
    }
    ~node(){
        cout<<"deleted node is "<<this->data<<endl;

    }

};
void print(node * &head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
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
 void insertatBeg(node*&head, node*&tail, int data){
     if(head==0){
        node* newnode= new node(data);
        head=newnode;
        tail=newnode;
     }
     else{
        // step 1 create a newnode
        node* newnode=new node(data);
        //step 2 
        newnode->next=head;
        //step 3
        head->prev=newnode;
        //step 4 
        head=newnode;
     }
 }
 void insertatEnd(node * & head, node * & tail, int data){
    if(head==0){
        node* newnode= new node(data);
        head=newnode;
        tail=newnode;
     }
     else{
        node * newnode=new node(data);
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
     }
 }
 void insertatPos(node *&head, node * &tail, int data,int pos){
    if(head==0){
        node * newnode= new node(data);
        head= newnode;
        tail=newnode;
        return ;
    }
    else{

    if(pos==1){
        insertatBeg(head, tail, data);
        return;
    }
    int len= findLen(head);
    if(pos>len){
        insertatEnd(head, tail, data);
        return;
    }
    //insert at middle
    node * prevNode=head;
    int i=1;
    while(i<pos-1){
        prevNode=prevNode->next;
        i++;
    }
    node *curr= prevNode->next;
    node * newnode= new node(data);
    prevNode->next=newnode;
    newnode->prev=prevNode;

    curr->prev=newnode;
    newnode->next=curr;
    }

    
 }
 void DeleteNode( node * & head, node *&tail,  int pos){
     if(head==0){
        cout<<"list is empty"<<endl;
        return ;
     }
     if(head->next==NULL){
        node * temp=head;
         head=NULL;
         delete temp;
         return;

     } 
      //delete at the first pos
     if(pos==1){
        node * temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
     }
     int len= findLen(head);
     if(pos>len){
        cout<<"position is invalid "<<endl;
        return ;
     }
     //delete at the end
     if(pos==len){
        node * temp=tail;
        tail=tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
        return ;
     }
     //delete at the middle
     //step1 find left curr and right
     node * left =head;
     int i=1; 
     while(i<pos-1){
        left=left->next;
        i++;
     }
     node * curr= left->next;
     node * right= curr->next;

     // step 2 
     left->next=right;
     right->prev=left;
     curr->prev=NULL;
     curr->next=NULL;
     delete curr;

 }
int main()
{
    node *head = NULL;
    node *tail = NULL;
    node* first= new node(10);
    node* sec= new node(20);
    node* third= new node(30);
    head=first;
    tail=third;
    

    first->next=sec;
    sec->prev=first;

    sec->next=third;
    third->prev=sec;
  //  print(first);

    //Insertion
     insertatBeg(head, tail,101);
    // print(head);

    insertatEnd(head, tail, 501);
   // print(head);
    //insert at pos
     insertatPos(head,tail,99,5);
     cout<<"before deleting"<<endl;
     print(head);
     //deleting the nod
     cout<<endl;
     cout<<"after deleting"<<endl;
     DeleteNode(head,tail,6);
     print(head);




}