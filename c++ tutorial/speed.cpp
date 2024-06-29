#include<iostream>
using namespace std;
int main (){
    int a,v, u;
    float speed;
    cout<<"enter 3 values"<<endl;
    cin>>a>>v>>u;
    speed = (v*v- u*u)/ (2*a);
    cout<<"speed is " << speed<<endl;
    return 0;

}