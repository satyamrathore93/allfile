#include<iostream>
#include <algorithm>
using namespace std;
void Generate_subsets( string str, string curr="",int i=0){
    if(i==str.length()){
        cout<<curr<<" ";
        return ;
    }
    Generate_subsets(str,curr,i+1);
    Generate_subsets(str,curr +str[i],i+1);
}
int main()
{
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;
    
    Generate_subsets(str);
    sort(str.begin(), str.end());
 
return 0;
}