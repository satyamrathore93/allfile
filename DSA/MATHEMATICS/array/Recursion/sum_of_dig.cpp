#include<iostream>
using namespace std;
int sum_of_digit(int n){
    if(n==0  )
    return 0;

 
 int s =sum_of_digit(n/10)+n%10;
return s;
}

int main()
{
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;
    cout<<"\nsum of digit is "<<sum_of_digit(n);

return 0;
}