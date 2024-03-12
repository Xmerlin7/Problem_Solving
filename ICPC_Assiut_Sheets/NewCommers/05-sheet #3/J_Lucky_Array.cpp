#include <iostream>
#include <limits>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    int arr[n];
    int minElement = numeric_limits<int>::max();
    int minFreq = 0;

    //! Big O: O(n)
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (minElement > arr[i]) {
            minElement = arr[i];
            minFreq = 1; // Reset frequency for the new minimum element
        } else if (arr[i] == minElement) {
            minFreq++; // Increment frequency for the minimum element
        }
    }
    
    if (minFreq % 2 == 1) {
        cout << "Lucky" << endl;
    } else {
        cout << "Unlucky" << endl;
    }
    
    return 0;
}