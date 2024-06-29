#include<iostream>
using namespace std;
int main()
{
    //also works for two odd occurence
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the numbers"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

        for(int i=0;i<n;i++){
    int count=0;
    for(int j=0;j<n;j++){

        if(arr[j]==arr[i]){

        count++;
        }
            }
        if(count%2!=0){
            cout<<"the  first odd occurence is"<<endl;
            cout<<arr[i];
        }

        
    }
return 0;
}