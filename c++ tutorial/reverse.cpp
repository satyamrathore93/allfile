#include<iostream>
using namespace std;
int main()
{
    
    int n,sum=0, ream, reverse=0;
    cout<<"enter the num"<<endl;
    cin>>n;
    while(n!=0){
        ream=n%10;
        sum=sum+ream;
        reverse= (reverse*10)+ream;
        n=n/10;
           
      }
      switch(ream){
        case 1: cout<<"three"<<endl;
                break;
        case 2: cout<<"two"<<endl;
                  break;
        case 3: cout<<"one"<<endl;
         break;
        
        default:
       cout<< "not matching"<<endl;
      }
    cout<<reverse<<endl<< sum<<endl;

    
return 0;
}