#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;

    if (c >= 'a' && c <= 'z')
    {
        char nextchar (c == 'z' ? 'a' : (c + 1));
        cout << nextchar;
    }
    else
    {
        /* Nothing*/
    }
    return (0);
}