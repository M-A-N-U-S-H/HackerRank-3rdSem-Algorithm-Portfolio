#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> candles(n);

    for (int i = 0; i < n; i++) {
        cin >> candles[i];
    }

    int maximum = candles[0];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (candles[i] > maximum) {
            maximum = candles[i];
            count = 1;
        }
        else if (candles[i] == maximum) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}