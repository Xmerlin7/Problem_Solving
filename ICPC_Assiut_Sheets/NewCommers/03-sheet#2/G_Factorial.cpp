#include <bits/stdc++.h>
using namespace std;
long long get_Fact(int n);
int main()
{
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> 
    }
    return (0);
}
long long get_Fact(int n)
{
    long long fact;
    if (n == 0)
        return (1);
    fact = get_Fact(n - 1);
    return (fact);
}