#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    double n, k, a, operation;
    cin >> n >> k >> a;
    operation = (n * k) / a;

    ll myNum = operation;
    if (operation == int(operation))
        cout << "int";
    else if (operation == myNum)
    {
        cout << "long long";
    }
    else
    {
        cout << "double";
    }
    return 0;
}
