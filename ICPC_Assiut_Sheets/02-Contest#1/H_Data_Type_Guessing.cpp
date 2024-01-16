#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    double n, k, a;
    cin >> n >> k >> a;
    double longRes = (n * k) / a;

    ll myNum = longRes;
    if (longRes == int(longRes))
        cout << "int";
    else if (longRes == myNum)
    {
        cout << "long long";
    }
    else
    {
        cout << "double";
    }
    return 0;
}
