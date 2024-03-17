#include <iostream>
#include <string>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        string num;
        cin >> num;

        bool foundGood = false;
        for (int i = 0; i < num.length() - 2; i++)
        {
            if ((num[i] == '0' && num[i + 1] == '1' && num[i + 2] == '0') ||
                (num[i] == '1' && num[i + 1] == '0' && num[i + 2] == '1'))
            {
                foundGood = true;
                break;
            }
        }

        if (foundGood)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }

    return 0;
}
