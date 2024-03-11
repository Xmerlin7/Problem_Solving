#include <bits/stdc++.h>
using namespace std;
void swap(int &x, int &c);
int main()
{
    int n;
    cin >> n;
    bool flag = true;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    //! Big O: O(n)
    for (int i = 0; i > n; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            swap(arr[i + 1], arr[i]);
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i];
    return 0;
}
void swap(int &x, int &c)
{
    int temp = x;
    x = c;
    c = temp;
}