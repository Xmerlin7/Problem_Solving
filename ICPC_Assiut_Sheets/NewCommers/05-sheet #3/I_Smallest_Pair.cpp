#include <iostream>
#include <vector>
#include <limits> // For numeric_limits

using namespace std;

int main()
{

    int t, n, smallestFound;
    
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> arr(n); // Use a vector for dynamic size and safety
        //? Initialize with maximum int value
        smallestFound = numeric_limits<int>::max();
        int sum = 0;
        for (int k = 0; k < n; k++)
            cin >> arr[k];

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                sum = arr[i - 1] + arr[j - 1] + (j - i);
                if (sum < smallestFound)
                {
                    smallestFound = sum;
                }
                
            }
        }

        cout << smallestFound << endl;
    }

    return 0;
}
