#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> prevSmaller(vector<int>&input){
  
    stack<int>s;
    s.push(-1);
    vector<int>ans;
    for(int i=0; i<input.size();i++){
      int curr=input[i];
        
        while(s.top()>=curr && s.top()!=-1){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(curr);
    }
    return ans;
}
vector<int> nextSmaller(vector<int>&input){

    stack<int>s;
    s.push(-1);
    vector<int>ans;
    for(int i=input.size()-1; i>=0;i--){
      int curr=input[i];
        
        while(s.top()>=curr){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(curr);
    }
    return ans;
    
}
int main()
{
    vector<int>input;
    input.push_back(2);
    input.push_back(1);
    input.push_back(4);
    input.push_back(3);
     
      vector<int>ans=nextSmaller(input);
      vector<int>ans2=prevSmaller(input);
      
      cout<<"Next Smaller"<<endl;
    
    for(int i=input.size()-1;i>=0;i--){
       cout<<ans[i]<<" ";
    } 
    cout<<endl;
    cout<<"prev smaller"<<endl;

    for(int i=0;i<input.size();i++){
       cout<<ans2[i]<<" ";
    }

return 0;
}