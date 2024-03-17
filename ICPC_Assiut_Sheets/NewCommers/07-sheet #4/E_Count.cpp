#include <iostream>
#include <string>

using namespace std;

int main()
{
    string num;
    long long sum = 0;
    cin >> num;
    for (auto& x : num)
        sum += x - 48;

    cout << sum <<endl;
    return 0;
}
