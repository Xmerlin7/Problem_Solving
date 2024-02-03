#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long eye, mouth, body;
    long long toysNumber;
    cin >> eye >> mouth >> body;
    //* note: if u try solve it with loops u will get
    //! time limit*/

    if ((eye == 0) || (body == 0))
        cout << 0;
    else if ((mouth == 0) && (eye > 1) && (body > 0))
    {
        //? i rturnded the body to avoid the farction problem
        toysNumber = (((eye / 2) > body) ? (body) : (eye / 2));
        cout << toysNumber;
    }
    else if ((mouth > 0) && (eye > 0) && (body > 0))
    {
        if ((mouth < eye) && (mouth < body))
        {
            toysNumber = mouth;
            body -= mouth;
            eye -= mouth;
            toysNumber += min(body, (eye / 2));
            cout << toysNumber;
        }
        else if ((mouth > eye) && (mouth < body))
        {
            toysNumber = min(mouth, eye);
            cout << toysNumber;
        }
        else if ((mouth > body) && (mouth < eye))
        {
            toysNumber = min(mouth, body);
            cout << toysNumber;
        }
        else
        {
            toysNumber = min(eye, body);
            cout << toysNumber;
        }
    }
    else
        cout << 0;
    return (0);
}