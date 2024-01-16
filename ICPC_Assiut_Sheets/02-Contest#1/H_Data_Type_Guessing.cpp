#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    double n, k, a;
    cin >> n >> k >> a;
    double long_res = (n * k) / a;

    ll myNum = long_res;
    if (long_res == int(long_res))
        cout << "int";
    else if (long_res == myNum)
    {
        cout << "long long";
    }
    else
    {
        cout << "double";
    }
    return 0;
}
