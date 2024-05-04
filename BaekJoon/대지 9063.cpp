// https://www.acmicpc.net/problem/9063

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int* x = new int[n];
    int* y = new int[n];

    for (int i = 0; i < n; i++)
        cin >> x[i] >> y[i];

    sort(x, x + n);
    sort(y, y + n);

    cout << (x[n - 1] - x[0]) * (y[n - 1] - y[0]) << endl;
}