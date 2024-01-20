#include <bits/stdc++.h>
using namespace std;
long long get_Fact(int n);
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cout << get_Fact(arr[i]) << endl; 
    }
    return (0);
}
long long get_Fact(int n)
{
    long long fact;
    if (n == 0)
        return (1);
    fact = n * get_Fact(n - 1);
    return (fact);
}