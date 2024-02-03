#include <iostream>
using namespace std;

int main()
{

    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int product = (((A % 100) * (B % 100)) % 100 * (C % 100)) % 100 * (D % 100) % 100;
    if (product < 10)
        cout << 0 << product;
    else
        cout << product;

    return 0;
}
