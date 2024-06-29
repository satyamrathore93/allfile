#include<iostream>
#include<string.h>
using namespace std;

 void removeSpaces(char arr[]){
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        if(arr[i]==' '){
            arr[i]='@';

        }
    }
 }
int main()
{
    char arr[]=  "Hello World";
    removeSpaces(arr);
    cout<<"The string after removing spaces is"<<arr;
return 0;
}