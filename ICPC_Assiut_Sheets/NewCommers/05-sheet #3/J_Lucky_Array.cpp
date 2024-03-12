#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, lowest = numeric_limits<int>::max(), x = 0;
    int freqArray[2000] = {0};
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    //! Big O: O(n)
    for (int i = 0; i < n; i++)
    {
        if (lowest > arr[i])
        {
            x = i;
            lowest = arr[i];
            freqArray[arr[i]]++;
        }
    }
    if (freqArray[lowest] % 2 == 0)
        cout << "Unlucky";
    else
        cout << "lucky";

    return 0;
}