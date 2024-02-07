#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char ch;
    cin >> ch >> n;
    int x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < x[i]; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    return (0);
}