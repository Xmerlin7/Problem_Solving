#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max, number;
    max = 0;
    while (n)
    {
        
        cin >> number;
        if(max < number)
            max = number;
        n--;
    }

    return (0);
}