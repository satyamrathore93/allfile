#include<iostream>
using namespace std;
bool compare(string str1, string str2){
    if(str1.length()!=str2.length()){
        return false;
    }
    else{
        for(int i=0;i<str1.length();i++){
            if(str1[i]!=str2[i]){
                return false;
            }
        }
        return true;
    }
}
int main()
{
 string str;
 getline(cin,str);
//  cout<<str.length()<<endl;
//  cout<<str.empty()<<endl;
//  str.push_back('A');
//  cout<<str<<endl;
//  str.pop_back();
//  cout<<str<<endl;
//  string s= str.substr(0,3); //not change the original string
//  cout<<s;
//  string str1= "Hello";
//  string str2="Hello";
//    cout<<str.compare(str1)<<endl;
//    int n= compare(str1,str2);
//    cout<<n<<endl;
//    cout<<str.find(str1);// return - if find the word
//    if(str.find(str1)==string::npos){
//     cout<<"not found"<<endl;

   str.replace(0,4,"hello");

   cout<<str<<endl;
   str.erase(0,4);
   cout<<str;


return 0;
}