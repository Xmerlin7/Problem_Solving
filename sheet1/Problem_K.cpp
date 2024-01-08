#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if ((a < b) && (a < c))
        cout << a << " ";
    else if ((b < a) && (b < c))
        cout << "No Multiples";
}