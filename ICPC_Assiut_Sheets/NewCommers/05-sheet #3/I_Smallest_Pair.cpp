#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, smallest;
    cin >> t, n;
    int arr[n];

    while (t)
    {
        for (int i = 0; i <= n; i++)
            cin >> arr[i];
        //! Big O: O(n ^ 2)
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; i < n; j++)
            {
                if (smallest > (arr[i] + arr[j] + j - i))
                    smallest = (arr[i] + arr[j] + j - i);
            }
        }

        t--;
    }

    cout << smallest;

    return 0;
}
