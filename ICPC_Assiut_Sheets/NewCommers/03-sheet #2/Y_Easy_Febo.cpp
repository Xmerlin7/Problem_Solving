#include <iostream>
using namespace std;
void fib(int n)
{
    int f[n];
    int i;
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i < n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (i = 0; i < n; i++)
    {
        cout << f[i] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    fib(n);
    return 0;
}

/*#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a = 0, b = 1, c;
    if (n == 0)
    {
        cout << 0 << endl;
    }
    else if (n == 1)
    {
        cout << a << " " << b << endl;
    }
    else
    {
        cout << a << " " << b << " ";
        for (int i = 2; i < n; ++i)
        {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
        cout << endl;
    }

    return 0;
}*/