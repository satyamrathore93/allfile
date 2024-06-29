#include<iostream>
#include<stack>
using namespace std;
void findMiddle(stack<int>&s, int Totalsize){
    if(s.size()==0){
        cout<<"there is no element in the stack"<<endl;
    }
    if(Totalsize/2+1==s.size()){
        cout<<s.top()<<endl;
        return;
    }
    int temp=s.top();
    s.pop();
    findMiddle(s,Totalsize);
    s.push(temp);
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
   st.push(70);
   int totalSize=st.size();
   findMiddle(st,totalSize);


    

return 0;
}