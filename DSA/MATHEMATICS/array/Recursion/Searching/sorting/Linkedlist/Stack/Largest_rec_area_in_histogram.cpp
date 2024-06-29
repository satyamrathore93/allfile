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
        
        while(  s.top()!=-1 && input[s.top()]>=curr  ){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(i);
    }
    return ans;
}
vector<int> nextSmaller(vector<int>&input){

    stack<int>s;
    s.push(-1);
    vector<int>ans;
    for(int i=input.size()-1; i>=0;i--){
      int curr=input[i];
        
        while( s.top()!=-1 && s.top()>=curr ){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(i);
    }
    return ans;
    
}
 int LargestRectangleINHistogram(vector<int>&input){
     vector<int>next=nextSmaller(input);
      vector<int>prev=prevSmaller(input);
       int maxarea=0;

    for(int i=0;i<input.size();i++) {
       int len=input[i];
       int width= next[i]-prev[i]-1;
       int area=len*width;
       if(next[i]==-1){
        next[i]=input.size();
       }
     maxarea= max(maxarea, area);

    }
    return maxarea;
 }
int main()
{
    vector<int>input={2,1,5,6,2,3};
    
     
      vector<int>ans=nextSmaller(input);
      vector<int>ans2=prevSmaller(input);
      int area=0;
       area= LargestRectangleINHistogram(input);
      
      cout<<"Next Smaller"<<endl;
    
    for(int i=input.size()-1;i>=0;i--){
       cout<<ans[i]<<" ";
    } 
    cout<<endl;
    cout<<"prev smaller"<<endl;

    for(int i=0;i<input.size();i++){
       cout<<ans2[i]<<" ";
    }
     cout<<endl;
    cout<<"area is"<<" "<<area <<endl;
 

return 0;
}