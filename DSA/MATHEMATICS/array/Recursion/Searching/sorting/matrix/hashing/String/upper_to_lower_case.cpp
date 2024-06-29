#include<iostream>
#include<string.h>
using namespace std;
string Upper_to_lower(string str){
 
 for(int i=0;i<str.length();i++){
    if(str[i]>='a' && str[i]<='z'){

    str[i]= str[i]-'a'+'A';
    }

 }
 return str;

}
string lower_to_Upper(string str){
 
 for(int i=0;i<str.length();i++){
    if(str[i]>='A' && str[i]<='Z'){
    str[i]= str[i]-'A'+'a';
    }
 }
 return str;

}
int main()
{ 
    string str;
    getline(cin,str);
 cout<< Upper_to_lower(str)<<endl;
 //cout<<lower_to_Upper(str);

return 0;
}