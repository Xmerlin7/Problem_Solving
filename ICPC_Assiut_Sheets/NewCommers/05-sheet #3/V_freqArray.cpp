#include <bits/stdc++.h>
using namespace std;
#define maxArraySize 100000
int main()
{
    int size, counter;
    cin >> size >> counter;
    int freqArr[maxArraySize + 1] = {0};
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        freqArr[arr[i]]++;
    }
    for (int i = 1; i <= counter; i++)
    {
        cout << freqArr[i] << endl;
    }
}