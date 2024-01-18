#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    float x;
    cin >> x;
    if (x > (int(x)))
        cout << "float " << int(x) << " " << (x - (int(x)));
    else
        cout << "int " << x;
}