// https://www.acmicpc.net/problem/2875

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int cnt = min(m, n / 2);
    cnt = min(cnt, (n + m - k) / 3);

    cout << cnt;
}