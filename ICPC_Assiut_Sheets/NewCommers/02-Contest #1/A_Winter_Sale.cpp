#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X, P;
    cin >> X >> P;

    double discountedPrice = static_cast<double>(P);
    double originalPrice = discountedPrice / (1 - (static_cast<double>(X) / 100));

    //? Round up to two decimal places 23.53 not 23.52
    originalPrice = ceil(originalPrice * 100) / 100;

    cout << fixed << setprecision(2) << originalPrice << endl;

    return (0);
}