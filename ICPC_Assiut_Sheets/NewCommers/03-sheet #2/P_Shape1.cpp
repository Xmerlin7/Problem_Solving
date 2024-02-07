#include <bits/stdc++.h>
using namespace std;
int digit_numbers(long long n);
int main()
{
    int n;
    cin >> n;
    int digit;
    long long x[n], num, rev[100];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < n; i++)
    {
        num = x[i];
        for (int j = digit_numbers(num); j > 0; j--)
        {
            num %= 10;
            rev[j] = num;
        }
        for (int j = digit_numbers(num); j > 0; j--)
        {

            cout << rev[j] << " ";
        }
    }
    return (0);
}
int digit_numbers(long long n)
{
    int ctr = 0;
    while(n)
    {
        n /= 10;
        ctr++;
    }
    return(ctr);
}