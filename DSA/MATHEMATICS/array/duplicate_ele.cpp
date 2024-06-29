#include<iostream>
#include<vector>
using namespace std;
void duplicate_ele(int arr[], int n ,int temp[]){
    
    temp[0]=arr[0];
    int res=1;
    int i;
    for ( i = 1;i < n ; ++i){
        if(temp[res-1]!=arr[i]){

        temp[res]=arr[i];
        res++;
        }
        
    }
        
    for( i=0;i<res;i++){
        cout<< temp[i]<<" ";
    }

   

}

int main()
{  
    int arr[7]={10,20,20,30, 30, 30,30};
    int temp[7];
duplicate_ele(arr,7, temp);
     
return 0;
}