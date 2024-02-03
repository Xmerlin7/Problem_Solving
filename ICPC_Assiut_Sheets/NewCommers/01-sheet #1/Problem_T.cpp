#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[3], sarr[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        sarr[i] = arr[i];
    }

    sort(arr, arr + 3);
    for (int i = 0; i < 3; i++)
        cout << arr[i]
             << endl;
    cout << endl;
    for (int i = 0; i < 3; i++)
        cout << sarr[i] << endl;
}