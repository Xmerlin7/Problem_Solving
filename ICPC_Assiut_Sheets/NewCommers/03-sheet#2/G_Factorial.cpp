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
ll get_Fact(int n);
int main(void)
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
ll get_Fact(int n)
{
    long long fact;
    if (n == 1)
        return (1);
    return (n * get_Fact(n - 1));
}