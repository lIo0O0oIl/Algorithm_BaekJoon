// https://www.acmicpc.net/problem/25238

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    double percent = n - n * (m / 100.0);

    if (percent < 100)
        cout << 1;
    else
        cout << 0;
}