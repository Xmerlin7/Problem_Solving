#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    //! Big O: O(n)
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] != arr[n - i - 1])
        {
            flag = 0;
            break;
        }
    }
    (flag == 1) ? cout << "YES" : cout << "NO";
    return 0;
}