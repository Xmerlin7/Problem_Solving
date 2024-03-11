#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, x, mid, start = 0, end = n - 1;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> x;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (x > arr[mid])
        {
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    if (x == arr[start])
        cout << start;
    else 
        cout << -1;
    return 0;
}