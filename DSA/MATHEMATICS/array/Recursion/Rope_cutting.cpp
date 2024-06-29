#include<iostream>
using namespace std;
int Rope_cutting (int n,int a, int b, int c){
    if(n==0){
        return 0;
    }
    else if(n<0){
        return -1;
    }
   int temp1=  Rope_cutting(n-a,a,b,c);
   int temp2= Rope_cutting(n-b,a,b,c);
     int temp3= Rope_cutting(n-c,a,b,c);
  
  int res= max(temp1 ,max(temp2,temp3));
   if(res==-1){
    return -1;
   }
  return res+1;
}
int main()
{
    int n ,a,b,c;
    cout<<"enter the num"<<endl;
    cin>>n;
    cout<<"enter the a ,b,c"<<endl;
    cin>>a>>b>>c;
  int res=  Rope_cutting(n,a,b,c);
    cout<<res;
    
return 0;
}