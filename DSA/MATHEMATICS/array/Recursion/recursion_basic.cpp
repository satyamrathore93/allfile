#include<iostream>
using namespace std;
void fun(int n){
    if(n==0){  // calculating bits of num
        return;
    }
    fun(n/2);
    cout<<(n%2);
}
int fun2(int n){
    if(n==1){  // calculating bits of num
        return 0;
    }
    return 1+fun2(n/2);
}

int main()
{ 
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;
  fun(n);
  cout<<endl;
 int a= fun2(n);
 cout<<a;

return 0;
}