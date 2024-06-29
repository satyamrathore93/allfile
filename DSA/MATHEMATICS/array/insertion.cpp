#include<iostream>
using namespace std;
int insert(int arr[], int n, int k, int cap, int pos){
    if(cap==n){
        return n;
    }
    int idx= pos-1;
    int i;
    for(i=n-1; i>=idx;i--){
        arr[i+1]=arr[i];

    }
        arr[idx]=k;
    return (n+1);

}
int main()
{   
    int arr[5]={1,2, 3, 4 };
    int k= 7;
    int pos=2;
     int a= insert(arr,4, k,5,pos);
     for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
     }
return 0;
}