#include<iostream>
using namespace std;
//brute force approach
// int move_all_zeros(int arr[],int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             for(int j=i+1;j<n;j++){
//                 if(arr[j]!=0){
//                     swap(arr[i],arr[j]);
//                 }

//             }
//         }
//     }
// }


// efficient approach
int move_all_zeros(int arr[],int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main()
{
    int arr[]={10, 9, 0,4,0,0,3};
   int a= move_all_zeros(arr,7);
   for(int i=0;i<a;i++){
    cout<<arr[i]<<" ";
   }
return 0;
}