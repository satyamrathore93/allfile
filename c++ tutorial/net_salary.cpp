#include<iostream>
using namespace std;
int main(){
    float basic;
    float percentallow;
    float percentdeduct;
    float netsalary;
 cout << " basic pay is " <<endl;;
 cin>>basic;
 cout<< "percent allow is "<<endl;
 cin>>percentallow;
 cout<<"percentdeduct is"<<endl;
 cin>>percentdeduct;
  netsalary= basic + basic * percentallow/100 - basic* percentdeduct /100;
  cout<< "net salaryis"<< netsalary <<endl;
  return 0;
}