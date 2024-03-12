#include <bits/stdc++.h>
using namespace std;
int main()
{
    int counter;
    cin >> counter;
    while (counter--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            cout << arr[i] << " ";
        }
        int flag = 0;
        int z = 0;
        int maxx;
        while (true)
        { 
            if (flag == 0)
            {
                maxx = max(arr[flag], arr[flag + 1]);
            }
            else if (flag != 0)
            {
                maxx = max(maxx, arr[flag + 1]);
            }
            cout << maxx << " ";
            if (flag == size - 1)
            {
                z++;
                
            }
        }
        cout << endl;
    }
}