#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, smallest = 20000;
    cin >> t >> n;
    int arr[n];

    while (t--)
    {
        for (int k = 0; k < n; k++)
            cin >> arr[k];
        //! Big O: O(n ^ 2)
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j < n; j++)
            {
                if (smallest > (arr[i] + arr[j] + j - i))
                    smallest = (arr[i] + arr[j] + j - i);
            }
        }
    }

    cout << smallest;

    return 0;
}
