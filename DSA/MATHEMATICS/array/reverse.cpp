#include<iostream>
using namespace std;
int reverse (int arr[], int n){
    cout<<"after"<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"before"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    reverse(arr,n);

return 0;
}