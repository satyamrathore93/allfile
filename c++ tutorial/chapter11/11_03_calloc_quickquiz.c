#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    ptr= (float *) calloc(6,sizeof(float));
    for(int  i=0; i<6; i++){
        printf("enter the value of an integer is : %d\n",i);
        scanf("%f",&ptr[i]);
    }
    for(int i=0; i<6; i++){
        printf(" the value of an decimal  is  %d = %f\n",i, ptr[i]);
    }
    return 0;
}