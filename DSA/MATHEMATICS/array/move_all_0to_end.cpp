#include<iostream>
using namespace std;
int main()
{
    int arr[]={8,5,0,10,0,20};
    int res=0;
    for(int i=0;i<6;i++){
    if(arr[i] ==res){
        arr[i]=arr[i+1];
    }
    }
    for (int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}