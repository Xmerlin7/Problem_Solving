#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases, ctr;
    int n;
    cin >> testCases >> n;
    int arr[n];
    ctr = n;
    while (testCases--)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ctr++;
            }
            i++;
        }
        cout << ctr << endl;
    }
}