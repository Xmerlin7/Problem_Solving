#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, lowest = 2000, x = 0;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    //! Big O: O(n)
    for (int i = 0; i < n; i++)
    {
        if (lowest > arr[i])
        {
            x = i + 1;
            lowest = arr[i];
        }
    }
    cout << lowest << " " << x;

    return 0;
}