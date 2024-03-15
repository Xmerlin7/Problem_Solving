#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases, ctr;

    cin >> testCases;

    while (testCases--)
    {
        int n;
        cin >> n;
        int arr[n];
        int i, z;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        i = 0;
        z = 0;
        while (true)
        {
            if (z == n - 1)
            {
                break;
            }
            if (arr[i] < arr[i + 1])
            {
                z++;
                i = z;
                continue;
            }
            i++;
            ctr++;
            if (i = n - 1)
            {
                z++;
                i = z;
            }
        }

        cout << ctr << endl;
    }
}