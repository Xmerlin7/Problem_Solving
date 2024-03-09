#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if ((i == j) && (i != (n / 2)) && (j != (n / 2))){
                cout << "\\" << endl;
            }
            else if((i != (n / 2)) && (j != (n / 2))){
                cout << "x";
            }else if (j != (n / 2) && (n - 1) - j){
                cout << "/";
            }
            else {
                cout << "*";
            }
        }
    }
    return 0;
}