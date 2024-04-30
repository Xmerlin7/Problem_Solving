#include <bits/stdc++.h>
using namespace std;
void print(int num)
{
    for (int i = 1; i <= num; i++)
    { 
        if (i != 1)
        {
            cout << " ";
        }
        cout << i; 
    }
}
int main()
{
    int num1;
    cin >> num1; 
    print(num1);
}