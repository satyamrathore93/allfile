#include<iostream>
using namespace std;
class DoublyEndedQueue{
public:
int * arr;
int size;
int front, rear;
 
 DoublyEndedQueue(int size){
    this->size=size;
    arr= new int[size];
    front=-1;
    rear=-1;
 }
 void pushRear(int data){
    if( front==0 && rear==size-1){
        cout<<"Q is Full"<<endl;
    }
    else if(front==-1){
        front=rear=0;
        arr[rear]=data;
    }
    else if(rear==size-1 && front!=0){
        rear=0;
        arr[rear]=data;
    }
      
      else{

        rear++;
        arr[rear]=data;
      }
    
   }

   void pushFront(int data){
    if( front==0 && rear==size-1){
        cout<<"Q is Full"<<endl;
        return;
    }
    else if(front==-1){
        front=rear=0;
        arr[front]=data;
    }
    
    else if(front==0 && rear!=size-1){
        front=size-1;
        arr[front]=data;
    }
      
      else{

        front--;
        arr[front]=data;
      }
    
   }

   void popFront(){
    if(front==-1){
        cout<<"Q is empty"<<endl;
    }
    else if(front==rear){
        arr[front]=-1;
        front=-1;
        rear=-1;
    }
    else if(front==size-1){
    arr[front]=-1;

        front=0;
    }
    else{
    arr[front]=-1;
        front++;
    
    }
   }

   void popRear(){

  if(front==-1){
        cout<<"Q is empty"<<endl;
    }
    else if(front==rear){
        arr[front]=-1;
        front=-1;
        rear=-1;
    }
    else if(rear==0){
      arr[rear]=-1;
        rear=size-1;

    }
    else{
    arr[rear]=-1;
        rear--;
    }
   }
   void print(){
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
   
   
}; 
int main()
{
  DoublyEndedQueue q(10);
 q.print();
  q.pushRear(10);
  q.pushRear(20);
  q.pushRear(30);
  q.pushRear(40);
  q.pushRear(50);
  q.pushRear(60);
  q.pushRear(70);
  q.pushRear(80);
  q.print();
  q.popRear();
  q.print();
  q.popRear();
  q.print();
  q.popFront();
  q.print();
   q.popFront();
  q.print();
   q.popFront();
  q.print();
  q.pushFront(101);
  q.print();
   q.pushFront(102);
  q.print();
   q.pushFront(103);
  q.print();
   q.pushFront(104);
  q.print();

  q.popFront();
  q.print();

 q.popFront();
 q.print();

 q.pushRear(201);
 q.print();

  q.pushRear(202);
 q.print(); 
 
 q.pushRear(203);
 q.print();

  q.pushRear(204);
 q.print();
  q.pushRear(205);
 q.print();
return 0;
}