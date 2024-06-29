//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

    
    vector<long long int> twoOddNum(long long int arr[], long long int N)  
    {
        // code here
        int  long long count=0;
        vector<long long int> s;
        long long int i;
        long long int res=0;
        for(i=0;i<N;i++){
        res=res^arr[i];
        }
           

        int right= res& -res;
        int long long g1=0,g2=0;
      for(int i=0;i<N;i++){
        if(right& arr[i]){
            g1=g1^arr[i];
        }
        else{
            g2=g2^arr[i];
        }
      }

        s.push_back(g1);
        s.push_back(g2);
     sort(s.begin(),s.end());
        reverse(s.begin(),s.end());
        return s;
        
        
        
    }

//{ Driver Code Starts.
int main()
{
    


    
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        
        vector<long long int>ans=twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
        
    
    return 0;
}
// } Driver Code Ends