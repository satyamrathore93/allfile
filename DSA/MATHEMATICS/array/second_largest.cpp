#include<iostream>
using namespace std;
int gre_ele(int arr[], int n){
    int res=0;
    int i;
    for(int i=1;i<n;i++){
        if (arr[res]<arr[i]){
            res=i;
    }
}
return res;
}
int sec_lar (int arr[] , int d){
   
   int lar = gre_ele(arr, d);
   int res=-1;
   for(int i=0; i<d;i++){
    if(arr[i]!=arr[lar]){
         
          

          if(res==-1)
           res=i;

          else if(arr[i]>arr[res])
          res=i;
    }

   }
   return res;
}
int main()
{
   int arr[]={20,10,20,8 ,12};
   gre_ele(arr,5);
   cout<<sec_lar(arr,5)<<endl;

return 0; 
}