#include <iostream>
#include <string>

using namespace std;

int main()
{
    string num;
    bool flag = false;
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        cin >> num;
        for (int i = 0; i < num.length() - 2; i++)
        {
            if (((num[i] + num[i + 1] + num[i + 2]) - (3 * 48)) == 1 ||
                ((num[i - 1] + num[i] + num[i + 1]) - (3 * 48)) == 1)
            {

                flag = true;
                break;
            }
        }
        if (flag == false)
            cout << "Bad" << endl;
        else
            cout << "Good" << endl;
    }

    return 0;
}
