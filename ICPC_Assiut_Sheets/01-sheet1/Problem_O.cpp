#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string equ;
    int Num1Int, Num2Int, OperatorIndex;
    string num1, num2;

    for (int i = 0; i < equ.size(); i++)
    {
        if ((equ[i] == '+') || (equ[i] == '-') || (equ[i] == '*') || (equ[i] == '/'))
        {
            OperatorIndex = i;
            break;
        }
    }
    num1 = equ.substr(0, OperatorIndex - 1);
    num2 = equ.substr(OperatorIndex + 1);
    stringstream num;
    num << num1;
    num >> Num1Int;

    num << num2;
    num >> Num2Int;

    switch (equ[OperatorIndex])
    {
    case '+':
        cout << Num1Int + Num2Int;
        break;
    case '-':
        cout << Num1Int - Num2Int;
        break;
    case '*':
        cout << Num1Int * Num2Int;
        break;
    case '/':
        cout << (int)Num1Int / Num2Int;
        break;
    default:
        break;
    }
    return (0);
}