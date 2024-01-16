#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    double n, k, a;
    cin >> n >> k >> a;
    double res = (n * k) / a;

    long long long_res = res;
    double my_res = res - long_res;
    if (my_res > 0)
    {
        cout << "double";
    }
    else if (long_res <= 2147483647)
        cout << "int";
    else
        cout << "long long";
    return (0);
}