#include <iostream>
#include <string>

using namespace std;

int main()
{
    string S;
    getline(cin, S); // Use getline to read the entire line including spaces

    for (char &c : S)
    {
        if (c == ',')
        {
            c = ' ';
        }
    }

    for (char &c : S)
    {
        if (isupper(c))
        {
            c = tolower(c);
        }
        else if (islower(c))
        {
            c = toupper(c);
        }
    }

    cout << S << endl;

    return 0;
}
