#include<iostream>

#include<algorithm>
using namespace std;
void fre_sor (int arr[],int n){
    sort(arr, arr+n);
    int count;
    if(n==1)
    cout<< n;

    for(int i=1;i<n;i++){
        count=1;
     if(arr[i]==arr[i-1]){
        count++;
     }
     else{
        count=1;
     }
        
     cout<<count<<" ";
    }
    


}

int main()
{
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0 ;i <n;++i){
        cin >>arr[i] ;

    }
     fre_sor(arr,n);
    // for(int i=0;i<a;i++){
    //     cout<<arr[i] <<" ";
    // }

return 0;
}