#include <iostream>
using namespace std;
int trailing_zeros(int n)
{
    int fact = 1;int count;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
         count = 0;
    }
        while (fact % 10 == 0)
        {

            count++;
            fact = fact / 10;
        }

        return count;
}
int main()
{
    int n;
    cin >> n;
    int a = trailing_zeros(n);
    cout << a;
    return 0;
}
