#include<iostream>
using namespace std;
 void fun3(int n){
 
 if (n==0) return;
 cout<<n<<" ";
 fun3(n-1);

}
void  fun4(int n){
 //print 1 to n
 cout<<endl;
 if (n==0) return ;
 fun4(n-1);
 cout<<n<<" ";
 

}
int main()
{
    int n;
        cout<<"enter the num"<<endl;
    cin>>n;
     fun3(n);
     fun4(n);
  

return 0;
}