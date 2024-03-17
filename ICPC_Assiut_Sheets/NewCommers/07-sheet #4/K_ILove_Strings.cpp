#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;

    while (N--) {
        string S, T;
        cin >> S >> T;

        string result;
        int i = 0, j = 0;

        // Iterate over both strings alternately
        while (i < S.length() || j < T.length()) {
            if (i < S.length()) {
                result += S[i];
                i++;
            }
            if (j < T.length()) {
                result += T[j];
                j++;
            }
        }
        cout << result << endl;
    }

    return 0;
}
