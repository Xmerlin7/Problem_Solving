#include <iostream>
#include <algorithm>
using namespace std;

bool binarySearch(long long *arr, int size, long long number);

int main()
{
    int n, q;
    cin >> n >> q;
    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    //! Process queries
    while (q--)
    {
        long long num; // Changed to long long for consistency
        cin >> num;
        if (binarySearch(arr, n, num))
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }

    return 0;
}
bool binarySearch(long long *arr, int size, long long number)
{
    int start = 0, end = size - 1;
    //! O(logn)
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == number)
        {
            return true;
        }
        else if (arr[mid] < number)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}