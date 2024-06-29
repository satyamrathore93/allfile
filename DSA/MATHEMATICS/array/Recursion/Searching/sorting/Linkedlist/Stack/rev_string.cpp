#include<iostream>
#include<stack>
using namespace std;
void reverse(string& str){
    stack<char>st;
    
    int i=0;
    while(i<str.length()){
         st.push(str[i]);
         
         i++;
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
        // res+=st.top();
    }

}
int main()
{
    string s= "satyam";
    reverse(s);
   // cout<<reverse(s);
return 0;
}