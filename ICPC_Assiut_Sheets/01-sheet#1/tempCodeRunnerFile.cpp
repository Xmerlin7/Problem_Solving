#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int n = a;
    while (a)
    {     
        if (n < 10)
        {
            if (a & 0x01)
                cout << "ODD";
            else
                cout << "EVEN";
        }
        n = a / 10;
    }

    return (0);
}