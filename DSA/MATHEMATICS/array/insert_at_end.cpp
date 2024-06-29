#include<iostream>
using namespace std;
int ins_at_end(int arr[], int n,int cap, int k){
  
  if(cap==n)
  return n;
  
 cout<<"before insertion"<<endl;
for(int i=0;i<n;i++){
    
    cout<<arr[i]<<endl;

    

}
arr[n]=k;
return (n+1);

}
int main()
{
 
 int arr[5]={1,2,3,4};
  int k=5;
  
  int a= ins_at_end(arr,4,5,k);
  cout<<"after insertion"<<endl;
  for(int i=0;i<a;i++){
    cout<<arr[i]<<" ";
  }
    
return 0;
}