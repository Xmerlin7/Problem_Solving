#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    char a;
    cin >> a;
    if (a >= 65 && a <= 90)
    {
        a += 32;
    }
    else if (a >= 97 && a <= 122)
    {
        a -= 32;
    }
    cout << a;

    return (0);
}