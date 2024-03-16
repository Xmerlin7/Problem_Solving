#include <bits/stdc++.h>
using namespace std;
int main()
{
    int counter;
    cin >> counter;
    while (counter--)
    {
        int n, i, z, ctr;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        z = 0;
        i = 0;
        if (z == n - 1)
            break;
        if (arr[i] < arr[i + 1])
        {
            z++;
            i = z;
            continue;
        }

        cout << endl;
    }
}