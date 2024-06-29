#include <iostream>
using namespace std;
int maximum_diff(int arr[], int n)
{
    int c = INT32_MIN;
    int d;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            int d = arr[j] - arr[i];
            if (d > c)
            {
                c = d;
            }
        }
    }

    return c;
}
int main()
{
    int n;
    cout << "enter the num" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << maximum_diff(arr, n);
    return 0;
}