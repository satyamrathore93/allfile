#include<iostream>
#include<stack>
using namespace std;
  void insertatBottom(stack<int>&s, int target){
       if(s.empty()){
        s.push(target);
        return ;
       }
       int topElement= s.top();
       s.pop();
       insertatBottom(s,target);
       s.push(topElement);
  }
  void reverseStack(stack<int>&s){
      
      if(s.empty()){
        return;
      }
     int target= s.top();
     s.pop();
     reverseStack(s);
     insertatBottom(s,target);
  }


int main()
{
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
      
    
      reverseStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

return 0;
}