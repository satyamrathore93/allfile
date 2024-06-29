#include<iostream>
using namespace std;
int lcm(int a,int b){
    int x=a;
    int y=b;
    int gcd;
   
    while(a!=b){
        if(a<b){
       b=b-a;
       gcd=b;
        }
        else{

        a=a-b;
        gcd=a;
        }
        
  int l= (x*y)/gcd;
  return l;



    }
}
int main()
{ 
    cout<<"enter the number"<<endl;
    int a,b;
    cin>>a>>b;
  int c=  lcm(a,b);
  cout<<c;

  return 0;
}