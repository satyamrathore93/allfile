#include<iostream>
using namespace std;
int array_sor (int arr[],int n){

    int res=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
        return 0;
        

    }
    return 1;
}
int main()
{
    int arr[]={8 ,9 ,10,12};
     int a =array_sor(arr,5);
     cout<<a;
return 0;
}