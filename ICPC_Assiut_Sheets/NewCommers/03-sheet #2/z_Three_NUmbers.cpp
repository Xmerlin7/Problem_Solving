#include <iostream>
using namespace std;

int main()
{
    short int k, s;
    int sum;

    int ctr = 0;
    cin >> k >> s;

    for (int x = 0; x <= k; x++)
    {
        for (int y = 0; y <= k; y++)
        {
            if ((s - x - y) >=0 && (s - x - y) <= k)
                ctr++;
        }
    }
    cout << ctr;
    return 0;
}