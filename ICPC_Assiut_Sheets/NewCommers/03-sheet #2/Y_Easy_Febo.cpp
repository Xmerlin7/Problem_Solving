#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the number of terms in the Fibonacci sequence (positive integer): " << endl;
    cin >> n;

    if (n < 0)
    {
        cout << "Invalid input: Please enter a positive integer." << endl;
        return 1; // Indicate error
    }

    // Calculate and print Fibonacci numbers
    if (n == 0)
    {
        cout << 0 << endl;
    }
    else if (n == 1)
    {
        cout << 0 << " " << 1 << endl;
    }
    else
    {
        int a = 0, b = 1, c;
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
}