// https://www.acmicpc.net/problem/1010

#include <iostream>
using namespace std;

int t, n, m;

int main() {
    cin >> t;

    while (t--) {
        long long l = 1;

        cin >> n >> m;

        int temp = m;
        m = n;
        n = temp;

        if (m > n - m) {
            m = n - m;
        }

        for (int i = n; i > n - m; i--)
            l *= i;
        for (int j = m; j >= 1; j--)
            l /= j;

        cout << l << endl;
    }
}