#include<iostream>
#include<vector>
using namespace std;
int  duplicate_ele(int arr[], int n ){
    

    int res=1;
    int i;
    for ( i = 1;i < n ; ++i){
        if(arr[res-1]!=arr[i]){

        arr[res]=arr[i];
        res++;
        }
    }
      return res;  
        
    

   

}

int main()
{  
    int arr[7]={10,20,20,30, 30, 30,30};

   int a = duplicate_ele(arr,7);
   cout<<a;
     
return 0;
}