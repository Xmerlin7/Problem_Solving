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
    while (n)
    {
        rev = rev + (n % 10);
        n = n / 10;
    }

    return (0);
}