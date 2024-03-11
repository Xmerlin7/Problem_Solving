#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, x, found = 0;
    cin >> n;

    int arr[n], ferqArray[n] = {0};
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    //! Big O: O(n)
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= 10)
            ferqArray[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (ferqArray[i])
            cout << "A[" << i << "]"
                 << " = " << arr[i] << endl;
    }

    return 0;
}