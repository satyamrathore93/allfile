#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n;
    printf("enter the value of an integer you want\n");
    scanf("%d",&n);
    ptr= (int *) malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        printf("enter the value of an integer is : %d\n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<n; i++){
        printf(" the value of an integer is  %d is : %d\n",i, ptr[i]);
    }
    return 0;
} 