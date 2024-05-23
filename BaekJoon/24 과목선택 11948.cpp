// https://www.acmicpc.net/problem/11948

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n[4], m[2];

    for (int i = 0; i < 4; i++)
        cin >> n[i];

    sort(n, n + 4);

    for (int i = 0; i < 2; i++)
        cin >> m[i];

    sort(m, m + 2);

    cout << n[1] + n[2] + n[3] + m[1];
}