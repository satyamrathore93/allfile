#include<iostream>
using namespace std;
int left_rotate_by1 (int arr[],int n){
    for(int i=0;i<n-1;i++){
        swap(arr[i],arr[i+1]);
    }
}
int main()
{
    int arr[]={1,2, 3 , 4, 5};
  int a= left_rotate_by1(arr, 5);
  for(int i=0;i<5;i++){
  cout<<arr[i]<<" ";
  }
return 0;
}