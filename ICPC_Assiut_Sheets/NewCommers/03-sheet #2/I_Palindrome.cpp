#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define mk make_pair
#define vi vector<int>
#define vl vector<long long>
#define pqi priority_queue<int>
#define qi queue<int>
#define sc set<char>
#define ss set<string>
#define si set<int>
#define pii pair<int, int>
#define mci map<char, int>

int main()
{
    int n, rev = 0;
    cin >> n;
    int orig = n;
    while (n)
    {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }
    if (rev == orig)
        cout << rev << endl
             << "YES";
    else
        cout << rev << endl
             << "NO";
    return (0);
}