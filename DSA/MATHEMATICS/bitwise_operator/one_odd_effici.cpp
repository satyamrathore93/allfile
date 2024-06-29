#include<iostream>
using namespace std;
int oddOcc (int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
    res=res^arr[i];
    }
    return res;
}
int main()
{
    
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the numbers"<<endl;
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
     int a= oddOcc(arr,n);
     cout<<"the one odd occ. is "<<a;

return 0;
}