#include<stdio.h>
int main(){
     int d,n, sum=0;
     printf("enter the number\n");
     scanf("%d",&n);
     for(int i=0; i<=50; i++){
        n=i,sum=0;
        while(n>0){
           d=n%10;
           n=i+(i+1);
           n=n/10; 
        }
        if(i==n){
            printf("%d",n);
        }
     }
    return 0;
}