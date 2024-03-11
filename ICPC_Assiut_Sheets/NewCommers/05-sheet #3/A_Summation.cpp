#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    long long a[n], sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    if (sum >= 0)
        cout << sum;
    else
        cout << abs(sum);

    return 0;
}