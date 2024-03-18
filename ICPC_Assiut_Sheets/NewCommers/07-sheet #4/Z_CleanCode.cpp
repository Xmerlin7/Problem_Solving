#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

string removeSingleLineComments(string line) {
    string result;
    bool inSingleLineComment = false;
    bool inBlockComment = false;
    
    for (int i = 0; i < line.length(); i++) {
        if (!inSingleLineComment && !inBlockComment && line[i] == '/' && i + 1 < line.length() && line[i + 1] == '/') {
            // Start of a single-line comment
            break;
        } else if (!inSingleLineComment && !inBlockComment && line[i] == '/' && i + 1 < line.length() && line[i + 1] == '*') {
            // Start of a block comment
            inBlockComment = true;
            i++;
        } else if (!inSingleLineComment && inBlockComment && line[i] == '*' && i + 1 < line.length() && line[i + 1] == '/') {
            // End of a block comment
            inBlockComment = false;
            i++;
        } else if (!inSingleLineComment && !inBlockComment) {
            result += line[i];
        }
    }
    
    return result;
}


// Function to remove blank lines and lines consisting of only spaces
vector<string> removeBlankLines(const vector<string> &lines)
{
    vector<string> cleanedLines;

    for (const string &line : lines)
    {
        if (line.find_first_not_of(' ') != string::npos)
        {
            cleanedLines.push_back(line);
        }
    }

    return cleanedLines;
}

int main()
{
    vector<string> sourceCode;
    string line;

    // Read the source code line by line
    while (getline(cin, line))
    {
        sourceCode.push_back(line);
    }

    // Remove single-line comments and block comments
    for (int i = 0; i < sourceCode.size(); i++)
    {
        sourceCode[i] = removeSingleLineComments(sourceCode[i]);
    }

    // Remove blank lines and lines consisting of only spaces
    sourceCode = removeBlankLines(sourceCode);

    // Output the cleaned source code
    for (const string &cleanedLine : sourceCode)
    {
        cout << cleanedLine << endl;
    }

    return 0;
}
