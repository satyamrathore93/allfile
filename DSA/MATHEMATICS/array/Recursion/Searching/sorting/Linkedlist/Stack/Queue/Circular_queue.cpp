#include<iostream>
using namespace std;
class CircularQueue {
  public:
    
   int *arr;
   int size;
   int front;
   int rear;
   // Constructor to create a queue
   CircularQueue(int size){
    this->size=size;
    arr=new int[size];
    front=-1;
    rear=-1;
   }
   void push(int data){
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
   void pop(){
    if(front==-1){
        cout<<"Q is empty"<<endl;
    }
    else if(front==rear){
        arr[front]=-1;
        front=-1;
        rear=-1;
    }
    else if(front==size-1){
        front=0;
    }
    else{
        front++;
    }
   }
   
   int getFront(){
    if(front==-1){
        return -1;
    }
    else{
       return  arr[front];
    }
   }


   
  
};
int main()
{ 
    CircularQueue q(10);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.getFront()<<endl;
    cout<<q.getFront()<<endl;
    


return 0;
}