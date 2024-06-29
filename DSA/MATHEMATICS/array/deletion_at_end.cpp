#include<iostream>
using namespace std;
int del_at_end(int arr[],int n, int k){
    int i;
    for( i=0;i<n;i++){
        if(arr[i]==k)
        break;
    }
     if(i==n){
        return n;
     }
     
     for(int j=i;j<n-1;j++){
        
        arr[j]=arr[j+1];
     }
     return (n-1);

    
}
int main()
{
    int arr[]={1,2,3, 4, 5};
    int k=3;
    int a= del_at_end(arr, 5, 3);
    cout<<"after"<<endl;
    for(int i=0;i<a;i++){
        cout<<arr[i];
    }
return 0;
}