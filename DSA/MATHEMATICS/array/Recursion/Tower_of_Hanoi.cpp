#include<iostream>
using namespace std;
void Tower_of_hanoi(int n,char src,char aux,char dest){
   if(n==1){
    cout<<src<< " ->"<<dest<<endl;
    return ;
   }
   Tower_of_hanoi(n-1,src, dest, aux);
   Tower_of_hanoi(1,src, aux, dest);
   Tower_of_hanoi(n-1,aux, src, dest);
}
int main()
{
  Tower_of_hanoi(2,'A','B','C');
return 0;
}