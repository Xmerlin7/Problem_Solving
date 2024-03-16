#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sizeA, sizeB, z = 0;
    int ctr = 0;
    cin >> sizeA >> sizeB;
    long long arrA[sizeA], arrB[sizeB];
    for (int i = 0; i < sizeA; i++)
    {
        cin >> arrA[i];
    }
    for (int i = 0; i < sizeB; i++)
    {
        cin >> arrB[i];
    }
    for (int i = 0; i < sizeA; i++)
    {
        if (arrA[i] == arrB[z])
        {
            z++;
            ctr++;
        }
    }
    if (ctr == sizeB)
        cout << "YES";
    else
        cout << "NO";
}