#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int fDigit = a % 10;
    int lDigit = (a / 10);

    if ((fDigit / lDigit) == 0 || (lDigit / fDigit) == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
