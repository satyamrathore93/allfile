#include<iostream>
using namespace std;
int miss_num(int arr[], int n){
     int flag;
    for(int i=1;i<=n;i++){
        flag=0;
    for(int j=0;j<n;j++){
        if (arr[j]==i) {
            flag =1;
            break;
        }
    }
        if(flag==0){
            return i;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ;i < n;++i){
        cin>>arr[i];
    }
    int a =miss_num(arr ,n);
    cout<<a; 

return 0;
}