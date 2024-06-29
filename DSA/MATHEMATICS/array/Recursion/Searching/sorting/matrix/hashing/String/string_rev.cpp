#include<iostream>
#include<string.h>
using namespace std;
void reveresecharArr(char a[]){
    int i=0;
    int j=strlen(a)-1;
    // while(i<=j){
    // swap(a[i],a[j]);
    // i++;;
    // j--;

    
    for (; i<=j;){
        swap(a[i],a[j]);
    i++;;
    j--;
    }

}
int main()
{
    char arr[]="Hello World";
    cout<<"Original String : "<<arr<<endl;
    reveresecharArr(arr);
    cout<<"Reversed String  : "<<arr<<endl;
return 0;
}