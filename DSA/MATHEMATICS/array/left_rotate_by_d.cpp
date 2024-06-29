#include<iostream>
using namespace std;
int main()
{  
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cout<<"enter the position"<<endl;
    cin>>d;
    for(int i=0;i<d;i++){
        
            
    for(int j=0;j<n-1;j++){
        swap(arr[j],arr[j+1]);
    }
        

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}