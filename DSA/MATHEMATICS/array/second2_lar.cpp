#include<iostream>
using namespace std;
int sec_lar(int arr[], int n){
    int res=-1, largest=0;
    for(int i=1;i<n;i++){
        if (arr[largest]<arr[i]){
            res=largest;
            largest=i;
    }
            else if(arr[i]!=arr[largest]){
                if(res==-1 || arr[i]>arr[res])
                 res=i;

            }
    }
    return res;
}
int main()
{
    int arr[6]={10, 20, 40 , 50, 80};
   int a=  sec_lar(arr, 6 );
   cout<<a;
return 0;
}