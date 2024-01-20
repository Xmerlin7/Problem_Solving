#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 1;
    while (max)
    {
        if (max == 13)
            break;
        cout << n << " * " << max << " = " << n * max << endl;
        max++;
    }

    return (0);
}