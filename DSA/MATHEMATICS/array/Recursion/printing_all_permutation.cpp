#include<iostream>
using namespace std;
string print_all_per(string str, int i=0){
    string result="";
    if (i==str.length()-1) {
        
        return str +"\t";
}
   for(int j=i;j<str.length();j++){
    swap(str[i],str[j]);
    result+= print_all_per(str, i+1);
    swap(str[j],str[i]);
   }
   return result ;
}
int main()
{
    string str;
    cout<<"enter the string"<<endl;
    cin>>str;
     print_all_per(str);
     cout<<print_all_per(str);
        
     
return 0;
}