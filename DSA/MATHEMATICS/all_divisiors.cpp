#include<iostream>
using namespace std;
int all_divisors(int n){
    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    // }
    int i=1;
    while(i<=n)
    return all_divisors(n%i==0);
 i++;
}
int main()
{
    int n;
    cout<<"enter the num"<<endl;

    cin>>n;
  int a=  all_divisors(n);
  cout<<a<<endl;
return 0;
}