#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int A, B, C, D;

    cin >> A >> B >> C >> D;
    int s = A * B * C * D;
    if (s < 10)
        cout << 0 << s;
    else
    {
        s %= 100;
        cout << s;
    }
}