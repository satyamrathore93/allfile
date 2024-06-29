#include<iostream>
using namespace std;
bool is_palin(string  &str, int s, int e){
    int n=str.length();
    if(s>=e){
        return true;
    }
    return  (str[s]==str[e]) && is_palin(str, s+1,e-1);
}
int main()
{

    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
    int n=str.length();
    int s=0,e=n-1;
    if(is_palin(str,s,e)){
        cout<<true;
    }
    cout<<false;
return 0;
}