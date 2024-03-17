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

    // Iterate through the characters of the string
    for (int i = 0; i < S.length(); i++)
    {
        // If the current character is a delimiter and the previous character is not a delimiter,
        // we have encountered the end of a word
        if (isDelimiter(S[i]) && (i == 0 || !isDelimiter(S[i - 1])))
        {
            wordCount++;
        }
    }

    // If the string doesn't end with a delimiter, we need to count the last word
    if (!isDelimiter(S.back()))
    {
        wordCount++;
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
