#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll res1 = a + b * c;
    ll res2 = a + b - c;
    ll res3 = a * b + c;
    ll res4 = a * b - c;
    ll res5 = a - b * c;
    ll res6 = a - b + c;

    if ((res1 == d) || (res2 == d) || (res3 == d) || (res4 == d) || (res5 == d) || (res6 == d))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return (0);
}