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
    int n;
    bool Prime;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        Prime = isPrime(i);
        if (Prime == true)
            cout << i << " ";
    }

    return (0);
}
bool isPrime(int n)
{
    bool isPrime = true;
    /*
    //! unused here as the main loop won't allow for 0 and 1

    if (n == 0 || n == 1)
        isPrime = false;
    */
    //? note: if n = 3 the loop won't excute so isPrime is still true*/
    for (int i = 2; i <= (n / 2); i++)
    {
        if ((n % i) == 0)
        {
            isPrime = false;
            break;
        }
    }
    return (isPrime);
}