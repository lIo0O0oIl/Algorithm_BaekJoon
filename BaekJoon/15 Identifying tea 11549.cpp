// https://www.acmicpc.net/problem/11549

#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0, x;

    cin >> n;

    for (int i = 0; i < 5; i++) {
        cin >> x;
        if (x == n)
            cnt++;
    }

    cout << cnt << endl;
}