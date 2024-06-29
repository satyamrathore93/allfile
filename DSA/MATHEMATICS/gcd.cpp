#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(a!=b){
        if(b>a){

        b=b-a;
        return b;
        }
        else
        a=a-b;
        return a;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int c=gcd(a,b);
    cout<<c;
return 0;
}