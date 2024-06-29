#include <iostream>
using namespace std;
int main()
{
    int a=4,d;
    d= 2* ++a + 2*a++;
    cout<<a<<"  "<<d<<endl;
    return 0;
}