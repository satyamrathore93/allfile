#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int *ptr2;
    ptr= (int *) malloc(60000*sizeof(int));
    for(int i=0; i<600; i++){
        printf("enter the value of an integer is : %d\n",i);
        scanf("%d",&ptr[i]);
        free(ptr);
    }
    for(int i=0; i<600; i++){
        printf(" the value of an integer is  %d is : %d\n",i, ptr[i]);
    }
    return 0;
}