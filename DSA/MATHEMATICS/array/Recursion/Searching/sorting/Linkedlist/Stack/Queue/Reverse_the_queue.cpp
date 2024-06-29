#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseQueue(queue<int>&q){
   stack<int>s;

   while(!q.empty()){
    int ele=q.front();
    q.pop();

    s.push(ele);
   }
   while(!s.empty()){
    int ele= s.top();
    s.pop();

    q.push(ele);
   }
}

int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    reverseQueue(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }




return 0;
}