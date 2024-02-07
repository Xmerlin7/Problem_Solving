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
    if ((ch == '+') || (ch == '*') || (ch == '-') || (ch == '/'))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < x[i]; j++)
            {
                cout << ch;
            }
            cout << endl;
        }
    }
    return (0);
}