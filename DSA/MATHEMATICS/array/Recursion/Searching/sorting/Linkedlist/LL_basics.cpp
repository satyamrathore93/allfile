#include<iostream>
#include<vector>
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
 node * ARR2LL ( vector<int> &arr) {
   node *mover; 
   node *head = new  node(arr[0],NULL);    
   mover=head;
   for(int i=1;i<arr.size();i++){
    node * temp= new node(arr[i],NULL);
    mover->next=temp;
    mover=temp;

   }
   
   
   return head;

 }
 node * Traverse(vector<int>&arr){
    node * head= new node(arr[0],NULL);
    node* mover=head;
     node * temp;
     while(temp!=nullptr){
        cout<<temp->data;
        mover->next=temp;
        temp=mover;
     }
 }


int main()

{   
   vector<int>a={1,2,3, 4};

//     node * y= new node (2,nullptr);
//    cout<<y->data;
//   node *y= new node(a[0],nullptr);
//   cout<<y->data<<" ";
//   cout<<y;

   //node* head =ARR2LL(a);
   node * head =Traverse(a);
// /while (head != nullptr) {
//         cout << head->data << " ";
//         head = head->next;
//     }
    
    
   
   
  
return 0;
}