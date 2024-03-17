#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string value;
    cin >> value;

    sort(value.begin(), value.end());

    int size = value.size();
    for (int i = 0; i < size; i++)
    {
        char c = value[i];
        int counter = 1;
        while (i + 1 < size && value[i] == value[i + 1])
        {
            counter++;
            i++;
        }
        cout << c << " : " << counter << endl;
    }

    return 0;
}
