#include<iostream>
using namespace std;
double celsius_to_fah(int n){
    double f= (n*9/5)+32;
    return  (f);
}
int main()
{ 
  int n;
  cin>>n ;
  double d= celsius_to_fah(n);
  cout<<d<<endl;
return 0;
}