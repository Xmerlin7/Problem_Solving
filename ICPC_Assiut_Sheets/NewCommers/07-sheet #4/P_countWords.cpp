#include <iostream>
#include <string>

using namespace std;

bool isDelimiter(char c)
{
    return c == ' ' || c == '!' || c == '.' || c == '?' || c == ',';
}
int countWords(string S)
{
    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; i < S.length(); i++)
    {
        if (!isDelimiter(S[i]))
        {

            if (!inWord)
            {
                wordCount++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    return wordCount;
}

int main()
{
    string S;
    getline(cin, S);

    int wordCount = countWords(S);
    cout << wordCount << endl;

    return 0;
}
