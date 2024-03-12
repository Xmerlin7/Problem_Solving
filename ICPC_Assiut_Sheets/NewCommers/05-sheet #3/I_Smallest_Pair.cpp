#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, smallest;
    cin >> n, t;
    bool flag = true;
    int arr[n];

    while (t)
    {
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        //! Big O: O(n)
        for (int i = 0; i < n - 1; i++)
        {

        }

        t--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
