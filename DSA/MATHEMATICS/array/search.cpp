#include<iostream>
using namespace std;
int search(int *arr, int n, int k){
    
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }

    }
    return -1;

}
int main()
{
    int arr[5]={1,2,5,3, 4};
    int k=5;
   cout<< search(arr,5, k);

return 0;
}