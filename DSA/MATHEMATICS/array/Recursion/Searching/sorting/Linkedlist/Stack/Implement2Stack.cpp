#include<iostream>
using namespace std;
class Stack{
   public:
   int size;
   int * arr;
   int top1;
   int top2;

   Stack(int size){
      arr= new int[size];
      this->size=size;
      top1=-1;
      top2=size;
   }
    ~Stack() {
        delete[] arr;
    }
   void push1(int data){
    if(top2-top1==1){
        cout<<"Stack1 is Full "<<endl;
    }
    else{
        top1++;
        arr[top1]=data;
    }

   }
   void push2(int data)
   {
      if(top2-top1==1){
        cout<<"Stack2 is Full "<<endl;
    }
    else{
        top2--;
        arr[top2]=data;
    }
   }
   void pop1(){
    if(top1==-1){
   cout<<"STack 1 is empty"<<endl;
    }
    else{
        top1--;
    }

   }
   void pop2(){
    if(top2==size){
        cout<<"Stack2 is empty "<<endl;
    }
    else{
        top2++;
    }
   }
    void print() {
        cout << "Stack 1: ";
        for (int i = 0; i <=top1; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Stack 2: ";
        for (int i = size - 1; i >= top2; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};
int main()
{ 
     Stack s(10);
     s.push1(10);
     s.print();
     
     s.push1(20);
     s.print();

     s.push1(30);
     s.print();
     
     s.push1(40);
     s.print();

      s.push1(50);
      s.print();

     s.push2(8);
     s.print();

     s.push2(10);
     s.print();
     
     s.push2(5);
     s.print();

     s.push2(7);
     s.print();

     s.push2(60);
     s.print();
  
    // s.push1(70);
    // s.print();
    // s.push2(80);
    // s.print();
     s.pop1();
     s.print();
     s.pop2();
     s.print();

     
     
     

  
return 0;
}