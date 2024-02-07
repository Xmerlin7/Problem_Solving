#include <iostream>
using namespace std;

int main()
{
    short int m, n;
    int sum;

    while (1)
    {
        cin >> m >> n;
        sum = 0;

        if (m <= 0 || n <= 0)
            break;

        for (int i = min(m, n); i <= max(m, n); ++i)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << "\n";
    }
    return 0;
}