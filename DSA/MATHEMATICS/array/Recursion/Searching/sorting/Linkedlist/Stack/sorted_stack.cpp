#include<iostream>
#include<stack>
using namespace std;
void Sorted_order(stack<int>&s, int target){
    if(s.empty()){
        s.push(target);
        return;
    }
    if(s.top()>target){
        s.push(target);
        return ;
    }
    int topEle= s.top();
    s.pop();
    Sorted_order(s,target);
    s.push(topEle);
}
void sortStack(stack <int>& s) {
    if(s.empty()){
        return ;
    }
    int target=s.top();
    s.pop();
    sortStack(s);
    Sorted_order(s, target);
}
int main()
{
    stack<int>s;
    s.push(9);
    s.push(5);
    s.push(3);
    s.push(11);
    s.push(7);

    sortStack(s);
    
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    

return 0;
}