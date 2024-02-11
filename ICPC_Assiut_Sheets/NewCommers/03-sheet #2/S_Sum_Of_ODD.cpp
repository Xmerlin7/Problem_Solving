#include <iostream>
using namespace std;

int main()
{
    short int m, n;
    int sum;

    int count;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> m >> n;
        sum = 0;

        for (int i = min(m, n) + 1; i <= max(m, n) - 1; ++i)
        {
            if (i % 2 != 0)
                sum += i;
        }
        cout << sum << endl;
    }
    return 0;
}