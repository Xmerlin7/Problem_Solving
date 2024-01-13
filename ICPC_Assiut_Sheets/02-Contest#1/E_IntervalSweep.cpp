#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int a, b;
    cin >> a >> b;

    if ((abs(a - b) <= 1) && a > 0 && b > 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return (0);
}