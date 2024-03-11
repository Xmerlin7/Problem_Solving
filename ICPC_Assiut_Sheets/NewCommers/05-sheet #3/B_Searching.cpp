#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, x, mid, start = 0, end = n - 1;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    while (start < end)
    {
        mid = n / 2;
        if (x > mid)
        {
            start = mid + 1;
        }
    }
    return 0;
}