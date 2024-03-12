#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    string arr;
    cin >> arr;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i] - '0';
    }

    cout << sum;
}
