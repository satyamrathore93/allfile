#include<iostream>
using namespace std;
void palindrome(int n){
  int a=n;
  int result=0;
  while(n>0){
    int rem=n%10;
    n=n/10;
    result=result*10+rem;

  }
  if(result==a){
    cout<<"palindrome"<<endl;
  }
  else{
    cout<<"not palindrome"<<endl;
  }
}
int main()
{
    int n;
    cin>>n;
    palindrome(n);
return 0;
}