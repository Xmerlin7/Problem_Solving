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
    int n1, n2, digit = 0, temp, imagee = 0;
    cin >> n1 >> n2;

    bool isLucky = false;
    bool noLucky = true;
    for (int i = n1; i <= n2; i++)
    {
        temp = i;
        imagee = i;
        while (temp)
        {
            digit = temp % 10;
            temp /= 10;
            if ((digit == 4) || (digit == 7))
            {
                isLucky = true;
                if (temp == 0)
                {
                    cout << imagee << " ";
                    noLucky = false;
                }
                    
            }
            else
            {
                isLucky = false;
                break;
            }
        }
    }
    if (noLucky == true)
        cout << -1;
}