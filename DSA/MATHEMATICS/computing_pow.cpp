#include<iostream>
#include<math.h>
using namespace std;
int  power(int x,int n){
   if(n<0){
   return power(1/x,-n);
   }

    if(n==0){
        return 1;
  } 
    int temp= power(x*x,n/2);
  

  if(n%2==0){
   return temp;
  }
  else{
   return  temp*x;
    }
}
int main()
{
    int x, n;
    cin>>x>>n;
  //  cout<<pow(x ,n);
//   int d=1;
//   for(int i=1;i<=n;i++){
//    d= x*x*x;
//   }
//   cout<<d;
int a=power(x,n);
cout<<a;
    return 0;
}