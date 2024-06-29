#include<iostream>
using namespace std;
int deletion(int arr[], int n, int k){
    int i;
    for( i=0;i<n;i++){
        if(arr[i]==k){
            break;
        }
    }
        if(i==n)
        return n;
        
        for(int j=i;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        return (n-1);

}
int main()
{
    int n;
    cout<<"enter the  num"<<endl;
    cin>>n;
    int arr[n];
    cout<<"\n enter array elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=12;
    int a=deletion(arr,n, k);
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }

    

return 0;
}