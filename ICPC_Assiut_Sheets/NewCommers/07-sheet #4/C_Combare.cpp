#include <iostream>
#include <string>

using namespace std;

int main()
{
    string X, Y;
    cin >> X >> Y;

    int comparison = X.compare(Y);

    if (comparison < 0)
        cout << X << endl;
    else if (comparison > 0)
        cout << Y << endl;
    else
        cout << X << endl;

    return 0;
}
