#include <iostream>
#include <string>

using namespace std;

int main()
{
    string num;
    long long sum = 0;
    cin >> num;
    for (int i = 0; i < num.size(); i++)
    {
        sum += num[i] - 48;
    }

    cout << sum <<endl;
    return 0;
}
