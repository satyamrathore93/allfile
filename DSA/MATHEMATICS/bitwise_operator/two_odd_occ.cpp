#include<iostream>
#include<vector>

using namespace std;

pair<int, int> oddOcc(int arr[], int n) {

    int res=0; int ans1=0,ans2=0;
    for(int i=0;i<n;i++){
    res=res^arr[i];
    }
    int s= res & -res;
    for(int i=0;i<n;i++){
        if(arr[i]&s)
      ans1=ans1^arr[i];
      else
      ans2=ans2^arr[i];
    }
    return make_pair(ans1, ans2);
    
}
int main()
{
    
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the numbers"<<endl;
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
      pair<int, int> result = oddOcc(arr, n);
      cout<<result.first<<" "<<result.second;
    
return 0;
}