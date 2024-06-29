#include<iostream>
#include<algorithm>


using namespace std;
int main()
{
    int arr[4]={10, 5 , 20,8};
     
    int res=0;
    for(int i=1;i<4;i++){
        if(arr[i]>arr[res])
        res=i;
    }
    cout<<res;
   
return 0;
}