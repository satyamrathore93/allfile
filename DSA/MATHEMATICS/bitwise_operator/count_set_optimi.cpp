#include <iostream>
using namespace std;
int table[256];
void inti()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2];
    }
}
int count(int n)
{
    int res = table[n & 0xff];
    n = n >> 8;

    res = res + table[n & 0xff];
    n = n >> 8;

    res = res + table[n & 0xff];
    n = n >> 8;

    res = res + table[n & 0xff];
    return res;
}
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;

    inti();
    int a = count(n);
    cout << a;
    return 0;
}