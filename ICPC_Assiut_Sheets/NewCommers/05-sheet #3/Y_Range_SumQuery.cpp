#include <iostream>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long prefixSum[n];
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    //! Process queries
    while (q--)
    {
        int L, R;
        cin >> L >> R;

        long long sum = (L == 1) ? prefixSum[R - 1] : (prefixSum[R - 1] - prefixSum[L - 2]);

        cout << sum << endl;
    }

    return 0;
}
