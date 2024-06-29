#include<iostream>
using namespace std;
class Queue{
  public:
   int *arr;
   int size;
   int front;
   int rear;
   // Constructor to create a queue
   Queue(int size){
    this->size=size;
    arr=new int[size];
    front=0;
    rear=0;
   }
   void push(int data){
     if(rear==size){
        cout<<"Queue is Full\n";
        return ;
     }
     else{
        arr[rear]=data;
        rear++;
     }
   }
   void pop(){
     if(front==rear){
        cout<<"Queue is empty";
     }
     else{
        arr[front]=-1;
        front++;
        if(front==rear){
            front=0;
            rear=0;
        }
     }
   }
   int getFront(){
      if(front==rear){
        return -1;
      }
      else{
       return arr[front];
      }
   }
    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
    }
    int getSize(){
        return rear-front;
    }

};
int main()
{
    Queue q(10);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    cout<<"the size of the queue is  "<<q.getSize()<<endl;
    q.pop();
    cout<<"the size of the queue is  "<<q.getSize()<<endl;
    cout<<"the front element is "<<q.getFront()<<endl;
    cout<<"is the queue empty ? "<<q.isEmpty()<<endl;

return 0;
}