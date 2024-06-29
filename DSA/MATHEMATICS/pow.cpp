#include<iostream>
using namespace std;
int myPow(int x, int n){
    int res=1;
    while(n){
        if(n){
            res=res*1/x;
        }
        else{
            res=res*x;
        }
    }
    return res;
}
int main()
{
    int a= myPow(2 , -2);
    cout<<a;

return 0;
}