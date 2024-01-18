#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max, number;
    cin >> n;
    max = 0;
    while (n)
    {
        
        cin >> number;
        if(max < number)
            max = number;
        n--;
    }
    cout << max;

    return (0);
}