#include<iostream>
using namespace std;
bool is_prime(int num){
    if(num==1){
        return false;;
    }
    if(num<=3){
        return true ;

    }
    if(num%2==0 || num%3==0){
        return false;
    }
    for (int i = 5 ;i*i <= num; i=i+6) {
        if(num%i==0 || num%(i+2)==0){
            return false ;
        }
    }
        return true;
}
void prime_factors(int n){
    
    int fact=1;
        for(int i=2;i*i<n;i++){
        if(is_prime(i)){
            int x=i;
            while(n%x==0){
                cout<<i<<endl;
                x=x*i;
            }
        }
         
         }
        
        
    
}
int main()
{ 
    int n;
    cout<<"enter the num";
    cin>>n;
   cout<< is_prime(n)<<endl;
    prime_factors(315);
    
return 0;
}