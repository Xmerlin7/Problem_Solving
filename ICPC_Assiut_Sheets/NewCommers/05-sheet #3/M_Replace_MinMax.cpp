#include <bits/stdc++.h>
using namespace std;
void swapy(vector<int>& arr, int iMinSaver, int iMaxSaver);
int main()
{

    int maxx = numeric_limits<int>::min();
    int minn = numeric_limits<int>::max();
    int size, iMaxSaver, iMinSaver;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (maxx < arr[i])
        {
            maxx = arr[i];
            iMaxSaver = i;
        }
        if (minn > arr[i])
        {
            minn = arr[i];
            iMinSaver = i;
        }
    }
    //! pass first element adress swapy(&arr[0], iMinSaver, iMaxSaver)
    swapy(arr, iMinSaver, iMaxSaver);
    for (auto &x : arr)
        cout << x << " ";
}

//! to solve error u can change the signature or:
void swapy(vector<int>& arr, int iMinSaver, int iMaxSaver)
{
    int temp = arr[iMaxSaver];
    arr[iMaxSaver] = arr[iMinSaver];
    arr[iMinSaver] = temp;
}
//! to use this look at lin 30
// void swapy(int *arr, int iMinSaver, int iMaxSaver)
// {
//     int temp = arr[iMaxSaver];
//     arr[iMaxSaver] = arr[iMinSaver];
//     arr[iMinSaver] = temp;
// }