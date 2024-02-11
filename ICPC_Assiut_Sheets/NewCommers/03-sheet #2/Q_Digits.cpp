#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string number;
    for (int i = 0; i < n; i++)
    {
        
        cin >> number;
        for (int j = number.size() - 1; j >= 0; j--)
        {
            cout << number[j] << " ";
        }
        cout << endl;
    }
        
    return (0);
}
