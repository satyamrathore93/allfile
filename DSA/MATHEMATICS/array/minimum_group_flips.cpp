#include<iostream>
using namespace std;
 void min_flips (bool arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            if(arr[i]!= arr[0])
            cout<<"from"<<i<<"to";
            else
            cout<<i-1<<endl;

        }
    }
    if(arr[n-1]!=arr[0]){
        cout<<n-1<<endl;
    }
 } 
int main()
{
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;
    bool arr[n];
    cout<<"enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    min_flips(arr,n);
   
return 0;
}