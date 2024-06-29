#include<iostream>
#include<stack>
using namespace std;
  void solve(stack<int>&s, int target){
       if(s.empty()){
        s.push(target);
        return ;
       }
       int topElement= s.top();
       s.pop();
       solve(s,target);
       s.push(topElement);
  }
void insertatBottom(stack<int>&s){
    
    if(s.empty()){
        cout<<"we can't insert the element"<<endl;
    }
    int target= s.top();
    s.pop();
    solve(s,target);
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
    insertatBottom(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

return 0;
}