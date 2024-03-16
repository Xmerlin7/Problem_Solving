#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word1, word2;
    cin >> word1 >> word2;
    cout << word1.size() << " " << word2.size() << endl;
    //? tis is called string concatination*/
    word1.append(" ").append(word2);
    cout << word1 << endl;
    /* another solution*/
    // cout << word1 << " " << word2 << endl;
}