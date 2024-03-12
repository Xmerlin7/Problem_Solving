#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n, t;
    bool flag = true;
    int arr[n];

    while (t)
    {
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        //! Big O: O(n^2)
        for (int i = 0; i < n - 1; i++)
        {

            for (int j = 0; j < n - i - 1; j++)
            {
            }
        }

        t--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
