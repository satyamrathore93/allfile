#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> allsubset(string s)
{
    vector<string> d;
    int n = s.length();
    int powsize = pow(2, n);
    for (int i = 1; i < powsize; i++)
    {
        string current = "";
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
                current += s;

        }
            d.push_back(current);
        
    }
        sort(d.begin(), d.end());
        return d;
}
int main()
{
    string s = "abc";
    vector<string> a = allsubset(s);
    for (int i = 1; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}