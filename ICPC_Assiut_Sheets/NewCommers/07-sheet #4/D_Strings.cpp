#include <iostream>
#include <string>

using namespace std;

int main()
{
    string X, Y;
    cin >> X >> Y;

    cout << X.size() << " " << Y.size() << endl;
    cout << X.append(Y) << endl;
    char temp;
    temp = X[0];
    X[0] = Y[0];
    Y[0] = temp;
    cout << X << " " << Y << endl;
    return 0;
}
