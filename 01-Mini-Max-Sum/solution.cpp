#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<long long> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    long long total = 0;

    for (long long x : arr) {
        total += x;
    }

    long long minSum = total - *max_element(arr.begin(), arr.end());
    long long maxSum = total - *min_element(arr.begin(), arr.end());

    cout << minSum << " " << maxSum << endl;

    return 0;
}