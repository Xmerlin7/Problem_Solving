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
    int n, a, lucky = -1;
    int digit;

    cin >> n >> a;
    for (int i = min(n, a); i <= max(n, a); i++)
    {
        int temp = i ;
        while (i)
        {
            digit = i % 10;
            if ((digit == 7) || (digit == 4))
                lucky = 1;
            else
                lucky = -1;
            i /= 10;
        }
        if (lucky == 1)
            cout << i << " " <<endl;
    }
    
    return (0);
}
