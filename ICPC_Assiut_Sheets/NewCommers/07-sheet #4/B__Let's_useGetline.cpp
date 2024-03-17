#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    getline(cin, S);

    size_t pos = S.find('\\');

    string result = S.substr(0, pos);

    cout << result << endl;

    return 0;
}
