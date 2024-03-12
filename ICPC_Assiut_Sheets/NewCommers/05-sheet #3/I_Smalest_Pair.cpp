#include <bits/stdc++.h>
using namespace std;
void swap(int &x, int &c);
int main()
{
    int n, t;
    cin >> n, t;
    bool flag = true;
    int arr[n];

    while (t)
    {
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        //! Big O: O(n^2)
        for (int i = 0; i < n - 1; i++)
        {
            bool swapped = false;

            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            //? If no swaps occurred, the array is already sorted
            if (!swapped)
            {
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        t--;
    }
    return 0;
}


void swap(int &x, int &c)
{
    int temp = x;
    x = c;
    c = temp;
}