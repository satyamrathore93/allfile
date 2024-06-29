#include<iostream>
using namespace std;
int main()
{
    int n;

    cin>>n;
    int temp=n;
    int result=0;
    while(n!=0){
    int rem=n%10;
     result=result*10+rem;
     n=n/10;

    }
    cout<<result;
return 0;
}