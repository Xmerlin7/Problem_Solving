#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, x, found = 0;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //! Big O: O(n)
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            arr[i] = 1;
        }
        else if (arr[i] < 0)
            arr[i] = 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}