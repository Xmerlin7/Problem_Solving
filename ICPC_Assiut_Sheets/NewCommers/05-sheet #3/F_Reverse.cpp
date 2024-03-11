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
    for (int i = n - 1; i >= 0; i++)
    {
        cout << arr[i] << " ";
    }
    
 
    return 0;
}