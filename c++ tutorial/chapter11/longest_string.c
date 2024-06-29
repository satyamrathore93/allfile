#include<stdio.h>
#include<string.h>
#define max_len 1024
int main(){
    char ptr[max_len];
    char longest_ptr[max_len];
    int i, count=0, max=0, index=0;
    printf("enter the longest string\n");
    gets(ptr);
    int len= strlen(ptr);
    for(i=0; i<=len; i++){
        
        if(ptr[i]!=' ' && ptr[i]!='\0'){

         count++;
         continue;
        }
        if(count>max){
            max=count;
            index=i- max;
        }
        count=0;
    }
    for(i=0;i<max; i++){
        longest_ptr[i]= ptr[index+i];
    }
    longest_ptr[i]='\0';
    printf("longest word is %s.\n", longest_ptr);
    printf("longest word length is : %d\n", max);

    
    return 0;
}
