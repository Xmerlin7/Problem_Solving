#include <bits/stdc++.h>
using namespace std;

int main()
{
    int passcode = 1999, password;

    bool flag = 1;
    while (flag)
    {
        cin >> password;
        if (passcode == password)
        {
            cout << "Correct" << endl;
            flag = 0;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }

    return (0);
}