#include<iostream>
using namespace std;
int main()
{  
    int n=5678, reamider;

    while(n>0){
        reamider=n%10;
        reamider+=2;
        n=n/10;
cout<<reamider<<"\t"<<endl;
}
return 0;
    }
