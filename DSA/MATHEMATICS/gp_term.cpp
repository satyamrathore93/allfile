#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,r, n;
    cin>>a>>r>>n;
   
    int t;
   int m=1000000007;

    for(int i=1;i<=n;i++){
        int d= pow(r,n-1);
     t= a*d%m;
    }
    cout<< (t)%m;
    //output 937102438 for 5 9 10
return 0;
}