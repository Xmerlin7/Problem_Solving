#include <iostream>
#include <vector>
#include <limits> // For numeric_limits

using namespace std;

int main()
{
    //? Initialize with maximum int value
    int t, n, smallestFound = numeric_limits<int>::max();

    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> arr(n); // Use a vector for dynamic size and safety

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i < n; i++)
        {
            for (int j = 2; j < n; j++)
            {
                int sum = arr[i] + arr[j] + j - i;
                if (sum < smallestFound)
                {
                    smallestFound = sum;
                }
            }
        }
        smallestFound = 0;
    }

    cout << smallestFound << endl;

    return 0;
}
