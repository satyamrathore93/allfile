#include<iostream>
using namespace std;
int sum_of_n(int n){
    
  if(n==0 || n==1){
    return n;
  }
      return  n+sum_of_n(n-1);
    
   
}
int main()
{
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;
 int a= sum_of_n(n);
 cout<<a;
    
return 0;
}