#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int value = arr[n - 1];
    int i = n - 2;

    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        printArray(arr);
        i--;
    }

    arr[i + 1] = value;
    printArray(arr);

    return 0;
}