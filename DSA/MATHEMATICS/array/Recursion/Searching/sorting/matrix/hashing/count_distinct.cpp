#include<iostream>
#include<unordered_set>
using namespace std;
 int countDis(int arr[],int n){ //naive solution
    bool flag;
    int res=0;
    for (int i = 0; i < n; ++i){
        flag=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
            if(flag==false){
                res++;
            }
    }
        return res;
 }

 // efficient solution
 int effCountDis(int arr[], int n) {
    unordered_set<int>s;
    for(int i=1;i<=n;i++){
        s.insert(arr[i]);
    }
    return s.size();
 }

int main()
{
    int arr[]={20,10, 13 ,20, 50, 50};
    int n= countDis(arr,6);
    cout<<n;
    cout<<effCountDis(arr, n);
return 0;
}
