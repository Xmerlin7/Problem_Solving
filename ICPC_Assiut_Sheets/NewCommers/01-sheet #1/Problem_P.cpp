#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;

    while (a)
    {
        if (a < 10)
        {
            if (a & 0x01)
                cout << "ODD";
            else
                cout << "EVEN";
        }
        a /= 10;
    }

    return (0);
}