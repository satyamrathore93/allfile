#include<iostream>
#include<math.h>
using namespace std;
    int countSetBits(int n)
    {
        // Your logic here
        
         if(n==0)
         return n;
         
         int x= log2(n);
         int total_setbits= (1<<(x-1))*x + (n-(1<<x) +1) + countSetBits(n-(1<<x));
         
         return total_setbits;
         
    }

   int main(){
   int n;
   cin>>n;
  int a= countSetBits(n);
  cout<<a;

    return 0;
    }