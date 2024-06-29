#include<iostream>
using namespace std;
int odd_even_len (int arr[],int n){
    if(n==1)
    return n;
    int count=0;
    for(int i=0;i<n;i++){

        if(arr[i]&1){
       if(arr[i]%2==0){
        count++;
       }
    }
        else{
            count++;
        }
       
}
return count;
}

int main()
{

    int n;
    cout << "enter the num" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a= odd_even_len(arr,n);
    cout<<a;

return 0;
}