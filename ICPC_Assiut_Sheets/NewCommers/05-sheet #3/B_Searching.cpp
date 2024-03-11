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
    cin >> x;
    //! Big O: O(n)
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << i;
            found = 1;
            break;
        }
    }

    if (found == 0)
        cout << -1;


    //? Binary search only works if the array is sorted

    // int n, x, mid, start = 0, end = n - 1;
    // cin >> n;
    // long long arr[n];
    // for (int i = 0; i < n; i++)
    //     cin >> arr[i];
    // cin >> x;
    // while (start <= end)
    // {
    //     mid = (start + end) / 2;
    //     if (x > arr[mid])
    //     {
    //         start = mid + 1;
    //     }
    //     else
    //         end = mid - 1;
    //     if (x == arr[mid])
    //     {
    //         cout << start;
    //         break;
    //     }
    //     else
    //     {
    //         cout << -1;
    //         break;
    //     }
    // }

    return 0;
}