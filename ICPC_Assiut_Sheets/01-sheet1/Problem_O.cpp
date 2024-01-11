#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string equ;
    int Num1Int, Num2Int, OperatorIndex;
    string num1, num2;

    //* Taking the mathematical expression as input
    cin >> equ;

    // Finding the index of the operator
    for (int i = 0; i < equ.size(); i++)
    {
        if ((equ[i] == '+') || (equ[i] == '-') || (equ[i] == '*') || (equ[i] == '/'))
        {
            OperatorIndex = i;
            break;
        }
    }

    //! Extracting the two numbers and converting them to integers
    
    num1 = equ.substr(0, OperatorIndex);
    num2 = equ.substr(OperatorIndex + 1);

    stringstream string1(num1);
    stringstream string2(num2);

    string1 >> Num1Int;
    string2 >> Num2Int;

    // Performing the operation based on the operator
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
        if (Num2Int != 0)
            cout << (int)Num1Int / Num2Int;
        else
            cout << "Error: Division by zero";
        break;
    default:
        cout << "Invalid operator";
        break;
    }

    return 0;
}
