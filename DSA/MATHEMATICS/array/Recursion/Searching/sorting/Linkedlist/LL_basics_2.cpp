#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node * next;      //pointer to the next node in the list

    node(int d, node *next){
        data=d;
       this-> next=next;
    }

};
void print(node * head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    node * first= new node(2,NULL);
    node * sec= new node(4,NULL);
    node * third= new node(3,NULL);
    node * fourth= new node(6,NULL);
    node * fifth= new node(5,NULL);
    /* Linking nodes */
     first->next=sec;
     sec->next=third;
     third->next=fourth;
     fourth->next=fifth;
   print(first);
return 0;
}