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

bool isPrime(int n);
int main(void)
{
    int n, a, maxx = -1;
    cin >> n >> a;
    for (int i = 1; i <= max(n, a); i++)
    {

        if ((n % i) == 0 && (a % i) == 0)
        {
            if (maxx < i)
                maxx = i;
        }
    }
    cout << maxx << endl;
    return (0);
}
