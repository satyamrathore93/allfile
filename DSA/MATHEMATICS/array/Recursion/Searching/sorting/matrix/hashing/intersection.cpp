#include<iostream>
using namespace std;
int Intersec(int a[], int b[], int n, int m){
    int res=0;
    for(int i=0;i<n;i++){
        bool found = false;
        for(int j=0;j<i;j++){
            if(a[i] == b[j]){
                found=true;
                break;
            }
        }
            if(found==true){
                continue;
            }
    for(int j=0;j<m;j++){
      if(a[i]==b[j]){
        res++;
        break;
      }
    }
    }
    return res;
}
int main()
{
    int a[]={10, 20 , 40, 30,50, 10};
    int b[]={45, 20 , 20, 10, 80};
    int s=Intersec(a,b,6,5);
    cout<<s;

return 0;
}